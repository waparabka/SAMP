#ifndef LOCAL_PLAYER_HPP
#define LOCAL_PLAYER_HPP

#include <samp/samp.hpp>
#include <samp/classes/ped.hpp>


namespace samp::classes {
    class CLocalPlayer {
    public:
        CPed* get_ped() {
            return ((CPed*(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_ped))(this);
        }

        void reset_data() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::reset_data))(this);
        }

        void process_head() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process_head))(this);
        }

        void set_special_action(char id) {
            ((void(__thiscall*)(CLocalPlayer*, char))OFFSET_BASED(offsets::local_player::set_special_action))(this, id);
        }

        char get_special_action() {
            return ((char(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_special_action))(this);
        }

        void update_surfing() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::update_surfing))(this);
        }

        void set_surfing(CVehicle* vehicle, int stuck) {
            ((void(__thiscall*)(CLocalPlayer*, CVehicle*, int))OFFSET_BASED(offsets::local_player::set_surfing))(this, vehicle, stuck);
        }

        void process_surfing() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process_surfing))(this);
        }

        int needs_to_update(const void* old, const void* new_data, unsigned int len) {
            return ((int(__thiscall*)(CLocalPlayer*, const void*, const void*, unsigned int))OFFSET_BASED(offsets::local_player::needs_to_update))(this, old, new_data, len);
        }

        int get_incar_send_rate() {
            return ((int(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_incar_send_rate))(this);
        }

        int get_onfoot_send_rate() {
            return ((int(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_onfoot_send_rate))(this);
        }

        int get_unoccupied_send_rate() {
            return ((int(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_unoccupied_send_rate))(this);
        }

        void set_spawn_info(const struct SpawnInfo* info) {
            ((void(__thiscall*)(CLocalPlayer*, const SpawnInfo*))OFFSET_BASED(offsets::local_player::set_spawn_info))(this, info);
        }

        int spawn() {
            return ((int(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::spawn))(this);
        }

        void set_color(unsigned long color) {
            ((void(__thiscall*)(CLocalPlayer*, unsigned long))OFFSET_BASED(offsets::local_player::set_color))(this, color);
        }

        unsigned long get_color_as_rgba() {
            return ((unsigned long(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_color_as_rgba))(this);
        }

        unsigned long get_color_as_argb() {
            return ((unsigned long(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::get_color_as_argb))(this);
        }

        void process_onfoot_world_bounds() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process_onfoot_world_bounds))(this);
        }

        void process_incar_world_bounds() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process_incar_world_bounds))(this);
        }

        void request_spawn() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::request_spawn))(this);
        }

        void prepare_for_class_selection() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::prepare_for_class_selection))(this);
        }

        void prepare_for_class_selection_outcome(int outcome) {
            ((void(__thiscall*)(CLocalPlayer*, int))OFFSET_BASED(offsets::local_player::prepare_for_class_selection_outcome))(this, outcome);
        }

        void enable_spectating(int enable) {
            ((void(__thiscall*)(CLocalPlayer*, int))OFFSET_BASED(offsets::local_player::enable_spectating))(this, enable);
        }

        void spectate_for_vehicle(uint16_t id) {
            ((void(__thiscall*)(CLocalPlayer*, uint16_t))OFFSET_BASED(offsets::local_player::spectate_for_vehicle))(this, id);
        }

        void spectate_for_player(uint16_t id) {
            ((void(__thiscall*)(CLocalPlayer*, uint16_t))OFFSET_BASED(offsets::local_player::spectate_for_player))(this, id);
        }

        int needs_to_send_onfoot_data(short controller_state, short left_stick_x, short left_stick_y) {
            return ((int(__thiscall*)(CLocalPlayer*, short, short, short))OFFSET_BASED(offsets::local_player::needs_to_send_onfoot_data))(this, controller_state, left_stick_x, left_stick_y);
        }

        int needs_to_send_incar_data(short controller_state, short left_stick_x, short left_stick_y) {
            return ((int(__thiscall*)(CLocalPlayer*, short, short, short))OFFSET_BASED(offsets::local_player::needs_to_send_incar_data))(this, controller_state, left_stick_x, left_stick_y);
        }

        bool define_camera_target(struct CameraTarget* info) {
            return ((bool(__thiscall*)(CLocalPlayer*, CameraTarget*))OFFSET_BASED(offsets::local_player::define_camera_target))(this, info);
        }

        void update_camera_target() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::update_camera_target))(this);
        }

        void draw_camera_target_label() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::draw_camera_target_label))(this);
        }

        void send_unoccupied_data(uint16_t vehicle, char arg4) {
            ((void(__thiscall*)(CLocalPlayer*, uint16_t, char))OFFSET_BASED(offsets::local_player::send_unoccupied_data))(this, vehicle, arg4);
        }

        void send_onfoot_data() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::send_onfoot_data))(this);
        }

        void send_aim_data() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::send_aim_data))(this);
        }

        void send_trailer_data(uint16_t trailer) {
            ((void(__thiscall*)(CLocalPlayer*, uint16_t))OFFSET_BASED(offsets::local_player::send_trailer_data))(this, trailer);
        }

        void send_passenger_data() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::send_passenger_data))(this);
        }

        void wasted_notification() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::wasted_notification))(this);
        }

        void request_class(int id) {
            ((void(__thiscall*)(CLocalPlayer*, int))OFFSET_BASED(offsets::local_player::request_class))(this, id);
        }

        void change_interior(char id) {
            ((void(__thiscall*)(CLocalPlayer*, char))OFFSET_BASED(offsets::local_player::change_interior))(this, id);
        }

        void chat(const char* text) {
            ((void(__thiscall*)(CLocalPlayer*, const char*))OFFSET_BASED(offsets::local_player::chat))(this, text);
        }

        void enter_vehicle(int vehicle, int passenger) {
            ((void(__thiscall*)(CLocalPlayer*, int, int))OFFSET_BASED(offsets::local_player::enter_vehicle))(this, vehicle, passenger);
        }

        void exit_vehicle(int vehicle) {
            ((void(__thiscall*)(CLocalPlayer*, int))OFFSET_BASED(offsets::local_player::exit_vehicle))(this, vehicle);
        }

        void send_stats() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::send_stats))(this);
        }

        void update_vehicle_damage(uint16_t vehicle) {
            ((void(__thiscall*)(CLocalPlayer*, uint16_t))OFFSET_BASED(offsets::local_player::update_vehicle_damage))(this, vehicle);
        }

        void next_class() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::next_class))(this);
        }

        void prev_class() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::prev_class))(this);
        }

        void process_class_selection() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process_class_selection))(this);
        }

        void update_weapons() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::update_weapons))(this);
        }

        void process_spectating() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process_spectating))(this);
        }

        void send_take_damage(int id, float damage, int weapon, int body_part) {
            ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))OFFSET_BASED(offsets::local_player::send_take_damage))(this, id, damage, weapon, body_part);
        }

        void send_give_damage(int id, float damage, int weapon, int body_part) {
            ((void(__thiscall*)(CLocalPlayer*, int, float, int, int))OFFSET_BASED(offsets::local_player::send_give_damage))(this, id, damage, weapon, body_part);
        }

        bool process_unoccupied_sync(uint16_t vehicle, CVehicle* vehicle_ptr) {
            return ((bool(__thiscall*)(CLocalPlayer*, uint16_t, CVehicle*))OFFSET_BASED(offsets::local_player::process_unoccupied_sync))(this, vehicle, vehicle_ptr);
        }

        void enter_vehicle_as_passenger() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::enter_vehicle_as_passenger))(this);
        }

        void send_incar_data() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::send_incar_data))(this);
        }

        void process() {
            ((void(__thiscall*)(CLocalPlayer*))OFFSET_BASED(offsets::local_player::process))(this);
        }
    };
}


#endif // !LOCAL_PLAYER_HPP