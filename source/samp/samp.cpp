#include <samp/samp.hpp>

#include <windows.h>

#ifdef UNICODE
constexpr auto module_name = L"samp.dll";
#else
constexpr auto module_name = "samp.dll";
#endif


uintptr_t samp::address(uintptr_t offset) {
    static auto samp_module = reinterpret_cast<uintptr_t>(GetModuleHandle(module_name));
    return samp_module + offset;
}


samp::VERSION samp::version() {
    static bool initialized = false;
    static VERSION v = VERSION::unknown;

    if (!initialized) {
        uintptr_t base = samp::address();
        
        auto* nt = reinterpret_cast<IMAGE_NT_HEADERS*>(base + reinterpret_cast<IMAGE_DOS_HEADER*>(base)->e_lfanew);
        uintptr_t ep = nt->OptionalHeader.AddressOfEntryPoint;

        switch (ep) {
            case 0x31DF13: v = VERSION::v037r1;  break;
            case 0x3195DD: v = VERSION::v037r2;  break;
            case 0xCC4D0:  v = VERSION::v037r31; break;
            case 0xCBCB0:  v = VERSION::v037r4;  break;
            case 0xFDB60:  v = VERSION::v03dlr1; break;
            case 0xCBC90:  v = VERSION::v037r5;  break;
            default: break;
        }
        initialized = true;
    }
    return v;
}