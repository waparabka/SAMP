#ifndef GAME_HPP
#define GAME_HPP

#include <samp/samp.hpp>
#include <samp/classes/ped.hpp>
#include <samp/classes/object.hpp>
#include <samp/classes/camera.hpp>
#include <samp/math/vector.hpp>

class CAudio; // TODO add CAudio
class CWeaponInfo; // TODO add CWeaponInfo
class IDirect3DDevice9;


namespace samp::classes {
    class CGame {
    public:
        int does_head_moves() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::does_head_moves))(this);
        }

        void* get_window_handle() {
            return ((void*(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::get_window_handle))(this);
        }

        CAudio* get_audio() {
            return ((CAudio * (__thiscall*)(CGame*)) OFFSET_BASED(offsets::game::get_audio))(this);
        }

        CCamera* get_camera() {
            return ((CCamera * (__thiscall*)(CGame*)) OFFSET_BASED(offsets::game::get_camera))(this);
        }

        CPed* get_player_ped() {
            return ((CPed * (__thiscall*)(CGame*)) OFFSET_BASED(offsets::game::get_player_ped))(this);
        }

        CGame() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::ctor))(this);
        }

        void set_cursor_mode(int mode, int immediately_hide_cursor) {
            ((void(__thiscall*)(CGame*, int, int))OFFSET_BASED(offsets::game::set_cursor_mode))(this, mode, immediately_hide_cursor);
        }

        void process_input_enabling() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::process_input_enabling))(this);
        }

        void let_time_go(int let) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::let_time_go))(this, let);
        }

        void set_world_weather(char weather) {
            ((void(__thiscall*)(CGame*, char))OFFSET_BASED(offsets::game::set_world_weather))(this, weather);
        }

        void set_frame_limiter(int value) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::set_frame_limiter))(this, value);
        }

        char get_current_interior() {
            return ((char(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::get_current_interior))(this);
        }

        void enable_clock(int enable) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::enable_clock))(this, enable);
        }

        void set_required_vehicle_models(unsigned char* model_count) {
            ((void(__thiscall*)(CGame*, unsigned char*))OFFSET_BASED(offsets::game::set_required_vehicle_models))(this, model_count);
        }

        void create_racing_checkpoint() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::create_racing_checkpoint))(this);
        }

        void process_checkpoints() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::process_checkpoints))(this);
        }

        float find_ground_z(CVector point) {
            return ((float(__thiscall*)(CGame*, CVector))OFFSET_BASED(offsets::game::find_ground_z))(this, point);
        }

        int is_started() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::is_started))(this);
        }

        void request_model(int model, int loading_stream) {
            ((void(__thiscall*)(CGame*, int, int))OFFSET_BASED(offsets::game::request_model))(this, model, loading_stream);
        }

        void load_requested_models() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::load_requested_models))(this);
        }

        int is_model_available(int model) {
            return ((int(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::is_model_available))(this, model);
        }

        void release_model(int model, int game_func) {
            ((void(__thiscall*)(CGame*, int, int))OFFSET_BASED(offsets::game::release_model))(this, model, game_func);
        }

        void set_world_time(char hour, char minute) {
            ((void(__thiscall*)(CGame*, char, char))OFFSET_BASED(offsets::game::set_world_time))(this, hour, minute);
        }

        void get_world_time(char* hour, char* minute) {
            ((void(__thiscall*)(CGame*, char*, char*))OFFSET_BASED(offsets::game::get_world_time))(this, hour, minute);
        }

        void set_max_stats() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::set_max_stats))(this);
        }

        void refresh_renderer(float x, float y) {
            ((void(__thiscall*)(CGame*, float, float))OFFSET_BASED(offsets::game::refresh_renderer))(this, x, y);
        }

        void request_animation(const char* file) {
            ((void(__thiscall*)(CGame*, const char*))OFFSET_BASED(offsets::game::request_animation))(this, file);
        }

        int is_animation_loaded(const char* file) {
            return ((int(__thiscall*)(CGame*, const char*))OFFSET_BASED(offsets::game::is_animation_loaded))(this, file);
        }

        void display_game_text(const char* text, int time, int size) {
            ((void(__thiscall*)(CGame*, const char*, int, int))OFFSET_BASED(offsets::game::display_game_text))(this, text, time, size);
        }

        int create_marker(int icon, CVector position, int color, int type) {
            return ((unsigned long(__thiscall*)(CGame*, int, CVector, unsigned long, int))OFFSET_BASED(offsets::game::create_marker))(this, icon, position, color, type);
        }

        void increase_player_money(int inc) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::increase_player_money))(this, inc);
        }

        int get_player_money() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::get_player_money))(this);
        }

        const char* get_weapon_name(int weapon) {
            return ((const char*(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::get_weapon_name))(this, weapon);
        }

        int create_weapon_pickup(int model, int ammo, CVector position) {
            return ((unsigned long(__thiscall*)(CGame*, int, int, CVector))OFFSET_BASED(offsets::game::create_weapon_pickup))(this, model, ammo, position);
        }

        IDirect3DDevice9* get_device() {
            return ((IDirect3DDevice9 * (__thiscall*)(CGame*)) OFFSET_BASED(offsets::game::get_device))(this);
        }

        CWeaponInfo* get_weapon_info(int weapon, int skill) {
            return ((CWeaponInfo * (__thiscall*)(CGame*, int, int)) OFFSET_BASED(offsets::game::get_weapon_info))(this, weapon, skill);
        }

        void set_world_gravity(float value) {
            ((void(__thiscall*)(CGame*, float))OFFSET_BASED(offsets::game::set_world_gravity))(this, value);
        }

        void set_wanted_level(char level) {
            ((void(__thiscall*)(CGame*, char))OFFSET_BASED(offsets::game::set_wanted_level))(this, level);
        }

        void enable_zone_displaying(int enable) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::enable_zone_displaying))(this, enable);
        }

        void enable_stunt_bonus(int enable) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::enable_stunt_bonus))(this, enable);
        }

        void enable_hud(int enable) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::enable_hud))(this, enable);
        }

        void reset_money() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::reset_money))(this);
        }

        void draw_gang_zone(float* pos, char color) {
            ((void(__thiscall*)(CGame*, float*, unsigned long))OFFSET_BASED(offsets::game::draw_gang_zone))(this, pos, color);
        }

        void delete_marker(int handle) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::delete_marker))(this, handle);
        }

        void load_animations_and_models() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::load_animations_and_models))(this);
        }

        int is_menu_visible() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::is_menu_visible))(this);
        }

        int using_gamepad() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::using_gamepad))(this);
        }

        void set_checkpoint(CVector* position, CVector* size) {
            ((void(__thiscall*)(CGame*, CVector*, CVector*))OFFSET_BASED(offsets::game::set_checkpoint))(this, position, size);
        }

        void set_racing_checkpoint(int type, CVector* position, CVector* next_position, float size) {
            ((void(__thiscall*)(CGame*, int, CVector*, CVector*, float))OFFSET_BASED(offsets::game::set_racing_checkpoint))(this, type, position, next_position, size);
        }

        void init_game() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::init_game))(this);
        }

        void start_game() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::start_game))(this);
        }

        void delete_racing_checkpoint() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::delete_racing_checkpoint))(this);
        }

        CPed* create_ped(int model, CVector position, float rotation, int a6, int a7) {
            return ((CPed * (__thiscall*)(CGame*, int, CVector, float, int, int)) OFFSET_BASED(offsets::game::create_ped))(this, model, position, rotation, a6, a7);
        }

        CVehicle* create_vehicle(int model, CVector position, float rotation, int has_siren) {
            return ((CVehicle * (__thiscall*)(CGame*, int, CVector, float, int)) OFFSET_BASED(offsets::game::create_vehicle))(this, model, position, rotation, has_siren);
        }

        CObject* create_object(int model, CVector position, CVector rotation, float draw_distance) {
            return ((CObject * (__thiscall*)(CGame*, int, CVector, CVector, float)) OFFSET_BASED(offsets::game::create_object))(this, model, position, rotation, draw_distance);
        }

        void disable_train_traffic() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::disable_train_traffic))(this);
        }

        void release_animation(const char* file) {
            ((void(__thiscall*)(CGame*, const char*))OFFSET_BASED(offsets::game::release_animation))(this, file);
        }

        void update_far_clipping_plane() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::update_far_clipping_plane))(this);
        }

        void create_pickup(int model, int type, CVector position, int* handle) {
            ((void(__thiscall*)(CGame*, int, int, CVector, int*))OFFSET_BASED(offsets::game::create_pickup))(this, model, type, position, handle);
        }

        void restart() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::restart))(this);
        }

        void set_number_of_intro_text_lines_this_frame(unsigned short value) {
            ((void(__thiscall*)(CGame*, unsigned short))OFFSET_BASED(offsets::game::set_number_of_intro_text_lines_this_frame))(this, value);
        }

        void load_scene(const char* file) {
            ((void(__thiscall*)(CGame*, const char*))OFFSET_BASED(offsets::game::load_scene))(this, file);
        }

        int get_used_memory() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::get_used_memory))(this);
        }

        int get_streaming_memory() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::get_streaming_memory))(this);
        }

        int get_timer() {
            return ((int(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::get_timer))(this);
        }

        void load_collision_file(const char* file) {
            ((void(__thiscall*)(CGame*, const char*))OFFSET_BASED(offsets::game::load_collision_file))(this, file);
        }

        void load_cull_zone(const char* line) {
            ((void(__thiscall*)(CGame*, const char*))OFFSET_BASED(offsets::game::load_cull_zone))(this, line);
        }

        void disable_auto_aiming() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::disable_auto_aiming))(this);
        }

        void enable_radar(int enable) {
            ((void(__thiscall*)(CGame*, int))OFFSET_BASED(offsets::game::enable_radar))(this, enable);
        }

        void sleep(int elapsed, int fps_limit) {
            ((void(__thiscall*)(CGame*, int, int))OFFSET_BASED(offsets::game::sleep))(this, elapsed, fps_limit);
        }

        int remove_ped(CPed* ped) {
            return ((int(__thiscall*)(CGame*, CPed*))OFFSET_BASED(offsets::game::remove_ped))(this, ped);
        }

        void process_frame_limiter() {
            ((void(__thiscall*)(CGame*))OFFSET_BASED(offsets::game::process_frame_limiter))(this);
        }
    };

    inline CGame*& game() {
		return *(CGame**)OFFSET_BASED(offsets::game::reference);
	}

    inline char*& game_text_message() {
        return *(char**)OFFSET_BASED(offsets::game::game_text_message);
    }

    inline int* used_player_slots() {
        return (int*)OFFSET_BASED(offsets::game::used_player_slots);
    }
}


#endif // !GAME_HPP