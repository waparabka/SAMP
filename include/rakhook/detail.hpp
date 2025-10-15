#ifndef RAKHOOK_DETAIL_HPP
#define RAKHOOK_DETAIL_HPP

#include <version>
#include <string>
#include <rakhook/raknet/BitStream.h>


namespace rakhook::detail {
    template <typename T>
    std::string read_with_size(RakNet::BitStream* bs) {
        T size;
        if (!bs->Read(size))
            return {};
        std::string str(size, '\0');
        bs->Read(str.data(), size);
        return str;
    }


    template <typename T>
    void write_with_size(RakNet::BitStream* bs, std::string_view str) {
        T size = static_cast<T>(str.size());
        bs->Write(size);
        bs->Write(str.data(), size);
    }
}


#endif // !RAKHOOK_DETAIL_HPP