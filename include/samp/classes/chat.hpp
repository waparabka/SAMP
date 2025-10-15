#ifndef CHAT_HPP
#define CHAT_HPP

#include <samp/samp.hpp>


namespace samp::classes {
	class c_chat {
	public:
		c_chat*& reference() {
			return *(c_chat**)samp::address(OFFSET(chat::reference));
		}
		
		void add_message(unsigned long color, const char* text) {
			((void(__thiscall*)(c_chat*, unsigned long, const char*))samp::address(OFFSET(chat::add_message)))(this, color, text);
		}
	};
}


#endif // !CHAT_HPP