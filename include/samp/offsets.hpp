#ifndef OFFSETS_HPP
#define OFFSETS_HPP

#include <cstdint>


namespace offsets {
	namespace chat {
		constexpr uintptr_t reference[] = { 0x21A0E4, 0x21A0EC, 0x26E8C8, 0x26E9F8, 0x26EB80, 0x2ACA10 };
		constexpr uintptr_t add_message[] = { 0x645A0, 0x64670, 0x679F0, 0x68130, 0x68170, 0x67BE0 };
	}
}



#define OFFSET(array) (array[static_cast<int>(samp::version())])

#endif // !OFFSETS_HPP