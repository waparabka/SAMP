#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <samp/samp.hpp>
#include <samp/classes/entity.hpp>


namespace samp::classes {
    class CVehicle : public CEntity {
    public:
        void reset_pointers() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::reset_pointers))(this);
        }

        void change_interior(int interior) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::change_interior))(this, interior);
        }

        int is_occupied() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_occupied))(this);
        }

        void set_invulnerable(int inv) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::set_invulnerable))(this, inv);
        }

        void set_locked(int locked) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::set_locked))(this, locked);
        }

        float get_health() {
            return ((float(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_health))(this);
        }

        void set_health(float value) {
            ((void(__thiscall*)(CVehicle*, float))OFFSET_BASED(offsets::vehicle::set_health))(this, value);
        }

        void set_color(unsigned char primary, unsigned char secondary) {
            ((void(__thiscall*)(CVehicle*, unsigned char, unsigned char))OFFSET_BASED(offsets::vehicle::set_color))(this, primary, secondary);
        }

        int get_subtype() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_subtype))(this);
        }

        int is_sunk() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_sunk))(this);
        }

        int is_wrecked() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_wrecked))(this);
        }

        int driver_is_player_ped() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::driver_is_player_ped))(this);
        }

        int has_player_ped() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::has_player_ped))(this);
        }

        int is_train_part() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_train_part))(this);
        }

        int has_turret() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::has_turret))(this);
        }

        void enable_siren(bool enable) {
            ((void(__thiscall*)(CVehicle*, bool))OFFSET_BASED(offsets::vehicle::enable_siren))(this, enable);
        }

        int siren_enabled() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::siren_enabled))(this);
        }

        void set_landing_gear_state(int hide) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::set_landing_gear_state))(this, hide);
        }

        int get_landing_gear_state() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_landing_gear_state))(this);
        }

        void set_hydra_thrusters(int direction) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::set_hydra_thrusters))(this, direction);
        }

        int get_hydra_thrusters() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_hydra_thrusters))(this);
        }

        void process_markers() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::process_markers))(this);
        }

        void lock(int lock) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::lock))(this, lock);
        }

        int update_last_driven_time() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::update_last_driven_time))(this);
        }

        float get_train_speed() {
            return ((float(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_train_speed))(this);
        }

        void set_train_speed(float value) {
            ((void(__thiscall*)(CVehicle*, float))OFFSET_BASED(offsets::vehicle::set_train_speed))(this, value);
        }

        void set_tires(char state) {
            ((void(__thiscall*)(CVehicle*, char))OFFSET_BASED(offsets::vehicle::set_tires))(this, state);
        }

        char get_tires() {
            return ((char(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_tires))(this);
        }

        void update_damage(int panels, int doors, char lights) {
            ((void(__thiscall*)(CVehicle*, int, int, char))OFFSET_BASED(offsets::vehicle::update_damage))(this, panels, doors, lights);
        }

        int get_panels_damage() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_panels_damage))(this);
        }

        int get_doors_damage() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_doors_damage))(this);
        }

        char get_lights_damage() {
            return ((char(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_lights_damage))(this);
        }

        void attach_trailer() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::attach_trailer))(this);
        }

        void detach_trailer() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::detach_trailer))(this);
        }

        void set_trailer(CVehicle* trailer) {
            ((void(__thiscall*)(CVehicle*, CVehicle*))OFFSET_BASED(offsets::vehicle::set_trailer))(this, trailer);
        }

        CVehicle* get_trailer() {
            return ((CVehicle*(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_trailer))(this);
        }

        CVehicle* get_tractor() {
            return ((CVehicle*(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_tractor))(this);
        }

        int is_trailer() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_trailer))(this);
        }

        int is_towtruck() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_towtruck))(this);
        }

        int is_rc() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::is_rc))(this);
        }

        void enable_lights(bool enable) {
            ((void(__thiscall*)(CVehicle*, bool))OFFSET_BASED(offsets::vehicle::enable_lights))(this, enable);
        }

        void remove_passengers() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::remove_passengers))(this);
        }

        int add_component(unsigned short id) {
            return ((int(__thiscall*)(CVehicle*, unsigned short))OFFSET_BASED(offsets::vehicle::add_component))(this, id);
        }

        int remove_component(unsigned short id) {
            return ((int(__thiscall*)(CVehicle*, unsigned short))OFFSET_BASED(offsets::vehicle::remove_component))(this, id);
        }

        void set_paintjob(unsigned char id) {
            ((void(__thiscall*)(CVehicle*, unsigned char))OFFSET_BASED(offsets::vehicle::set_paintjob))(this, id);
        }

        int does_exist() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::does_exist))(this);
        }

        void set_license_plate_text(const char* text) {
            ((void(__thiscall*)(CVehicle*, const char*))OFFSET_BASED(offsets::vehicle::set_license_plate_text))(this, text);
        }

        void set_rotation(float value) {
            ((void(__thiscall*)(CVehicle*, float))OFFSET_BASED(offsets::vehicle::set_rotation))(this, value);
        }

        void construct_license_plate() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::construct_license_plate))(this);
        }

        void shutdown_license_plate() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::shutdown_license_plate))(this);
        }

        int has_siren() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::has_siren))(this);
        }

        char get_max_passengers() {
            return ((char(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::get_max_passengers))(this);
        }

        void set_window_open_flag(unsigned char door_id) {
            ((void(__thiscall*)(CVehicle*, unsigned char))OFFSET_BASED(offsets::vehicle::set_window_open_flag))(this, door_id);
        }

        void clear_window_open_flag(unsigned char door_id) {
            ((void(__thiscall*)(CVehicle*, unsigned char))OFFSET_BASED(offsets::vehicle::clear_window_open_flag))(this, door_id);
        }

        void enable_engine(int enable) {
            ((void(__thiscall*)(CVehicle*, int))OFFSET_BASED(offsets::vehicle::enable_engine))(this, enable);
        }

        int has_driver() {
            return ((int(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::has_driver))(this);
        }

        void update_color() {
            ((void(__thiscall*)(CVehicle*))OFFSET_BASED(offsets::vehicle::update_color))(this);
        }
    };
}


#endif // !VEHICLE_HPP