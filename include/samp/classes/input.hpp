#ifndef INPUT_HPP
#define INPUT_HPP

#include <samp/samp.hpp>
#include <samp/math/rect.hpp>


namespace samp::classes {
    using cmdproc_t = void(__cdecl*)(const char*);
    
    class CInput {
    public:
        void get_rect(CRect* rect) {
            ((void(__thiscall*)(CInput*, CRect*))OFFSET_BASED(offsets::input::get_rect))(this, rect);
        }

        void open() {
            ((void(__thiscall*)(CInput*))OFFSET_BASED(offsets::input::open))(this);
        }

        void close() {
            ((void(__thiscall*)(CInput*))OFFSET_BASED(offsets::input::close))(this);
        }

        void add_recall(const char* text) {
            ((void(__thiscall*)(CInput*, const char*))OFFSET_BASED(offsets::input::add_recall))(this, text);
        }

        void recall_up() {
            ((void(__thiscall*)(CInput*))OFFSET_BASED(offsets::input::recall_up))(this);
        }

        void recall_down() {
            ((void(__thiscall*)(CInput*))OFFSET_BASED(offsets::input::recall_down))(this);
        }

        void enable_cursor() {
            ((void(__thiscall*)(CInput*))OFFSET_BASED(offsets::input::enable_cursor))(this);
        }

        cmdproc_t get_command_handler(const char* name) {
            return ((cmdproc_t(__thiscall*)(CInput*, const char*))OFFSET_BASED(offsets::input::get_command_handler))(this, name);
        }

        void set_default_command(cmdproc_t proc) {
            ((void(__thiscall*)(CInput*, cmdproc_t))OFFSET_BASED(offsets::input::set_default_command))(this, proc);
        }

        void add_command(const char* name, cmdproc_t proc) {
            ((void(__thiscall*)(CInput*, const char*, cmdproc_t))OFFSET_BASED(offsets::input::add_command))(this, name, proc);
        }

        int msg_proc(int msg, int wp, int lp) {
            return ((int(__thiscall*)(CInput*, int, int, int))OFFSET_BASED(offsets::input::msg_proc))(this, msg, wp, lp);
        }

        void reset_dialog_controls(void* gameui) {
            ((void(__thiscall*)(CInput*, void*))OFFSET_BASED(offsets::input::reset_dialog_controls))(this, gameui);
        }

        void send(const char* text) {
            ((void(__thiscall*)(CInput*, const char*))OFFSET_BASED(offsets::input::send))(this, text);
        }

        void process_input() {
            ((void(__thiscall*)(CInput*))OFFSET_BASED(offsets::input::process_input))(this);
        }
    };

    inline CInput*& input() {
		return *(CInput**)OFFSET_BASED(offsets::input::reference);
	}
}


#endif // !INPUT_HPP