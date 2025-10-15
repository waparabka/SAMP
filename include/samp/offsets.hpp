#ifndef OFFSETS_HPP
#define OFFSETS_HPP

#include <cstdint>


namespace offsets {
	namespace chat {
		constexpr uintptr_t reference[] = { 0x21A0E4, 0x21A0EC, 0x26E8C8, 0x26E9F8, 0x26EB80, 0x2ACA10 };
		constexpr uintptr_t add_message[] = { 0x645A0, 0x64670, 0x679F0, 0x68130, 0x68170, 0x67BE0 };
	}
	namespace rakhook {
		constexpr uintptr_t samp_info[] = { 0x21a0f8, 0x21A100, 0x26e8dc, 0x26ea0c, 0x26EB94, 0x2aca24 };
		constexpr uintptr_t rakclient_interface[] = { 0x3c9, 0x18, 0x2c, 0x2c, 0x0, 0x2c };
		constexpr uintptr_t destroy_interface[] = { 0x342d0, 0x343B0, 0x37680, 0x37d70, 0x37DC0, 0x37880 };
		constexpr uintptr_t handle_rpc_packet[] = { 0x372f0, 0x373D0, 0x3a6a0, 0x3ad90, 0x3ADE0, 0x3a8a0 };
		constexpr uintptr_t alloc_packet[] = { 0x347e0, 0x348C0, 0x37b90, 0x38280, 0x382D0, 0x37d90 };
		constexpr uintptr_t offset_packets[] = { 0xdb6, 0xdb6, 0xdb6, 0xdb6, 0xdb6, 0xdb6 };
		constexpr uintptr_t write_lock[] = { 0x35b10, 0x35BF0, 0x38ec0, 0x395b0, 0x39600, 0x390c0 };
		constexpr uintptr_t write_unlock[] = { 0x35b50, 0x35C30, 0x38f00, 0x395f0, 0x39640, 0x39100 };
	}
}


#define OFFSET(array) (array[static_cast<int>(samp::version())])
#define OFFSET_BASED(array) (samp::address(OFFSET(array)))

#endif // !OFFSETS_HPP