#ifndef CHAT_HPP
#define CHAT_HPP

#include <samp/samp.hpp>

#include <stdarg.h>
#include <stdio.h>


namespace samp::classes {
	class CRect {
public:
		long left, top;
		long right, bottom;

		CRect();
		CRect(long left, long top, long right, long bottom);
	};

	enum EntryType {
        ENTRY_TYPE_NONE = 0,
        ENTRY_TYPE_CHAT = 1 << 1,
        ENTRY_TYPE_INFO = 1 << 2,
        ENTRY_TYPE_DEBUG = 1 << 3
    };


	class CChat {
	public:
		int get_mode() {
			return ((int(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::get_mode))(this);
		}

		void switch_mode() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::switch_mode))(this);
		}

		void recalc_font_size() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::recalc_font_size))(this);
		}

		void on_lost_device() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::on_lost_device))(this);
		}

		void on_reset_device() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::on_reset_device))(this);
		}

		void update_scrollbar() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::update_scrollbar))(this);
		}

		void set_page_size(int page_size) {
			((void(__thiscall*)(CChat*, int))OFFSET_BASED(offsets::chat::set_page_size))(this, page_size);
		}

		void page_up() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::page_up))(this);
		}

		void page_down() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::page_down))(this);
		}

		void render_entry(const char* text, CRect rect, unsigned long color) {
			((void(__thiscall*)(CChat*, const char*, CRect, unsigned long))OFFSET_BASED(offsets::chat::render_entry))(this, text, rect, color);
		}

		void log(int type, const char* text, const char* prefix) {
			((void(__thiscall*)(CChat*, int, const char*, const char*))OFFSET_BASED(offsets::chat::log))(this, type, text, prefix);
		}

		void reset_dialog_controls(void* game_ui) {
			((void(__thiscall*)(CChat*, void*))OFFSET_BASED(offsets::chat::reset_dialog_controls))(this, game_ui);
		}

		void render() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::render))(this);
		}

		void add_entry(int type, const char* text, const char* prefix, unsigned long text_color, unsigned long prefix_color) {
			((void(__thiscall*)(CChat*, int, const char*, const char*, unsigned long, unsigned long))OFFSET_BASED(offsets::chat::add_entry))(this, type, text, prefix, text_color, prefix_color);
		}

		void draw() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::draw))(this);
		}

		void render_to_surface() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::render_to_surface))(this);
		}

		void add_chat_message(const char* nick, unsigned long nick_color, const char* text) {
			((void(__thiscall*)(CChat*, const char*, unsigned long, const char*))OFFSET_BASED(offsets::chat::add_chat_message))(this, nick, nick_color, text);
		}

		void add_message(unsigned long color, const char* text) {
			((void(__thiscall*)(CChat*, unsigned long, const char*))OFFSET_BASED(offsets::chat::add_message))(this, color, text);
		}

		void scroll_to_bottom() {
			((void(__thiscall*)(CChat*))OFFSET_BASED(offsets::chat::scroll_to_bottom))(this);
		}

		void scroll(int delta) {
			((void(__thiscall*)(CChat*, int))OFFSET_BASED(offsets::chat::scroll))(this, delta);
		}

		void filter_out_invalid_chars(char* text) {
			((void(__thiscall*)(CChat*, char*))OFFSET_BASED(offsets::chat::filter_out_invalid_chars))(this, text);
		}

		void print(unsigned long color, const char* format, ...) {
			char buf[512] { };

			va_list args;
			va_start(args, format);
			vsprintf_s(buf, format, args);
			va_end(args);

			filter_out_invalid_chars(buf);
			add_entry(ENTRY_TYPE_DEBUG, buf, nullptr, color, 0);
		}
	};

	inline CChat*& chat() {
		return *(CChat**)OFFSET_BASED(offsets::chat::reference);
	}
}


#endif // !CHAT_HPP