#ifndef CHAT_HPP
#define CHAT_HPP

#include <samp/samp.hpp>


namespace samp::classes {
	class CChat {
	public:
		void add_message(unsigned long color, const char* text) {
			((void(__thiscall*)(CChat*, unsigned long, const char*))samp::address(OFFSET(chat::add_message)))(this, color, text);
		}
	};

	inline CChat*& get_chat() {
		return *(CChat**)samp::address(OFFSET(chat::reference));
	}
}


#endif // !CHAT_HPP