#ifndef SAMP_HPP
#define SAMP_HPP

#include <samp/offsets.hpp>


namespace samp {
    enum class VERSION {
        unknown = -1,
        v037r1 = 0,
        v037r2,
        v037r31,
        v037r4,
        v037r5,
        v03dlr1
    };

    uintptr_t address(uintptr_t offset = 0);
    VERSION version();
}


#endif // !SAMP_HPP