#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <windows.h>
#include <cstdint>


namespace samp::memory {
	class CProtection {
	public:
		CProtection(uintptr_t addr, size_t size);
		CProtection(void* ptr, size_t size);
		~CProtection();

	private:
		uintptr_t addr_ = 0;
        size_t size_ = 0;

		DWORD old_prot_ = 0;
	};

	inline CProtection::CProtection(uintptr_t addr, size_t size)
		: addr_(addr), size_(size) {
		VirtualProtect(reinterpret_cast<void*>(addr_), size_, PAGE_EXECUTE_READWRITE, &old_prot_);
	}

	inline CProtection::CProtection(void* ptr, size_t size)
		: addr_(reinterpret_cast<uintptr_t>(ptr)), size_(size) {
		VirtualProtect(reinterpret_cast<void*>(addr_), size_, PAGE_EXECUTE_READWRITE, &old_prot_);
	}

	inline CProtection::~CProtection() {
		VirtualProtect(reinterpret_cast<void*>(addr_), size_, old_prot_, nullptr);
	}

	inline void safe_copy(void* dst, const void* src, size_t size) {
		CProtection unprot(dst, size);
		memcpy(dst, src, size);
	}

	inline void safe_copy(uintptr_t dst, uintptr_t src, size_t size) {
		safe_copy(reinterpret_cast<void*>(dst), reinterpret_cast<void*>(src), size);
	}

	inline void safe_set(void* dst, uint8_t value, size_t size) {
		CProtection unprot(dst, size);
		memset(dst, value, size);
	}

	inline void safe_set(uintptr_t dst, uint8_t value, size_t size) {
		safe_set(reinterpret_cast<void*>(dst), value, size);
	}

	inline bool compare_bytes(const uint8_t* data, const uint8_t* bytes, const char* mask) {
		if (!data || !bytes || !mask) return false;
		for (; *mask; ++mask, ++data, ++bytes) {
			if (*mask == 'x' && memcmp(data, bytes, 1) != 0) {
				return false;
			}
		}
		return *mask == 0;
	}

	inline bool compare_bytes(const uint8_t* data, const char* bytes, const char* mask) {
		return compare_bytes(data, reinterpret_cast<const uint8_t*>(bytes), mask);
	}

	inline uintptr_t find_pattern(uintptr_t base, size_t len, const uint8_t* bytes, const char* mask) {
		for (auto i = 0u; i < len; ++i) {
			if (compare_bytes(reinterpret_cast<uint8_t*>(base + i), bytes, mask)) {
				return base + i;
			}
		}
		return 0;
	}

	inline uintptr_t find_pattern(uintptr_t base, size_t len, const char* bytes, const char* mask) {
		return find_pattern(base, len, reinterpret_cast<const uint8_t*>(bytes), mask);
    }
}


#endif // !MEMORY_HPP