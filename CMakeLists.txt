cmake_minimum_required(VERSION 4.0)
project(samp VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(USE_RAKHOOK "Build with rakhook support" ON)

add_library(samp)

target_sources(samp PRIVATE
    source/samp/samp.cpp
)

target_include_directories(samp PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

if(USE_RAKHOOK)
    message(STATUS "Building with rakhook support")

    include(FetchContent)
    FetchContent_Declare(kthook GIT_REPOSITORY https://github.com/kin4stat/kthook.git)
    FetchContent_MakeAvailable(kthook)
    
    target_sources(samp PRIVATE
        source/rakhook/rakhook.cpp
        
        source/raknet/BitStream.cpp
        source/raknet/DS_HuffmanEncodingTree.cpp
        source/raknet/PluginInterface.cpp
        source/raknet/StringCompressor.cpp
    )
    
    target_link_libraries(samp PRIVATE ktsignal kthook xbyak)
    target_compile_definitions(samp PRIVATE USE_RAKHOOK)
endif()