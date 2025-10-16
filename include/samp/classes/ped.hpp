#ifndef PED_HPP
#define PED_HPP

#include <samp/samp.hpp>
#include <samp/classes/entity.hpp>


namespace samp::classes {
    class CPed {
    public:
        void reset_pointers() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::reset_pointers))(this);
        }

        void set_initial_state() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::set_initial_state))(this);
        }

        void* get_aim() {
            return ((void * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_aim))(this);
        }

        void set_aim(const void* aim) {
            ((void(__thiscall*)(CPed*, const void*))OFFSET_BASED(offsets::ped::set_aim))(this, aim);
        }

        char get_current_weapon() {
            return ((char(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_current_weapon))(this);
        }

        int get_vehicle_ref() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_vehicle_ref))(this);
        }

        void delete_arrow() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::delete_arrow))(this);
        }

        int is_on_screen() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::is_on_screen))(this);
        }

        void set_immunities(int bp, int fp, int ep, int cp, int mp) {
            ((void(__thiscall*)(CPed*, int, int, int, int, int))OFFSET_BASED(offsets::ped::set_immunities))(this, bp, fp, ep, cp, mp);
        }

        float get_health() {
            return ((float(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_health))(this);
        }

        void set_health(float value) {
            ((void(__thiscall*)(CPed*, float))OFFSET_BASED(offsets::ped::set_health))(this, value);
        }

        float get_armour() {
            return ((float(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_armour))(this);
        }

        void set_armour(float value) {
            ((void(__thiscall*)(CPed*, float))OFFSET_BASED(offsets::ped::set_armour))(this, value);
        }

        int get_flags() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_flags))(this);
        }

        void set_flags(int value) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::set_flags))(this, value);
        }

        int is_dead() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::is_dead))(this);
        }

        char get_state() {
            return ((char(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_state))(this);
        }

        void set_state(char value) {
            ((void(__thiscall*)(CPed*, char))OFFSET_BASED(offsets::ped::set_state))(this, value);
        }

        void set_rotation(float value) {
            ((void(__thiscall*)(CPed*, float))OFFSET_BASED(offsets::ped::set_rotation))(this, value);
        }

        void force_rotation(float value) {
            ((void(__thiscall*)(CPed*, float))OFFSET_BASED(offsets::ped::force_rotation))(this, value);
        }

        int is_passenger() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::is_passenger))(this);
        }

        void* get_vehicle() { // TODO: add CVehicle
            return ((void * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_vehicle))(this);
        }

        void clear_weapons() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::clear_weapons))(this);
        }

        void set_armed_weapon(int weapon, bool is_game_func) {
            ((void(__thiscall*)(CPed*, int, bool))OFFSET_BASED(offsets::ped::set_armed_weapon))(this, weapon, is_game_func);
        }

        float get_distance_to_entity(const CEntity* entity) {
            return ((float(__thiscall*)(CPed*, const CEntity*))OFFSET_BASED(offsets::ped::get_distance_to_entity))(this, entity);
        }

        int get_vehicle_seat_index() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_vehicle_seat_index))(this);
        }

        void put_into_vehicle(int vehicle, int seat) {
            ((void(__thiscall*)(CPed*, unsigned long, int))OFFSET_BASED(offsets::ped::put_into_vehicle))(this, vehicle, seat);
        }

        void enter_vehicle(int vehicle, int is_passanger) {
            ((void(__thiscall*)(CPed*, unsigned long, bool))OFFSET_BASED(offsets::ped::enter_vehicle))(this, vehicle, is_passanger);
        }

        void exit_vehicle() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::exit_vehicle))(this);
        }

        void warp_from_vehicle(CVector put_at) {
            ((void(__thiscall*)(CPed*, CVector))OFFSET_BASED(offsets::ped::warp_from_vehicle))(this, put_at);
        }

        void set_spawn_info(const CVector* position, float rotation) {
            ((void(__thiscall*)(CPed*, const CVector*, float))OFFSET_BASED(offsets::ped::set_spawn_info))(this, position, rotation);
        }

        void set_controllable(int enabled) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::set_controllable))(this, enabled);
        }

        char get_death_info(uint16_t* killer) {
            return ((unsigned char(__thiscall*)(CPed*, uint16_t*))OFFSET_BASED(offsets::ped::get_death_info))(this, killer);
        }

        void hands_up() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::hands_up))(this);
        }

        int does_hands_up() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::does_hands_up))(this);
        }

        void hold_object(int model) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::hold_object))(this, model);
        }

        void enable_jetpack() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::enable_jetpack))(this);
        }

        void disable_jetpack() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::disable_jetpack))(this);
        }

        int has_jetpack() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::has_jetpack))(this);
        }

        int enable_passenger_driveby_mode() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::enable_passenger_driveby_mode))(this);
        }

        void extinguish() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::extinguish))(this);
        }

        void set_walk_style(const char* name) {
            ((void(__thiscall*)(CPed*, const char*))OFFSET_BASED(offsets::ped::set_walk_style))(this, name);
        }

        void perform_animation(const char* name, const char* file, float delta, int loop_a, int loop_x, int lock_y, int lock_f, int time) {
            ((void(__thiscall*)(CPed*, const char*, const char*, float, int, int, int, int, int))OFFSET_BASED(offsets::ped::perform_animation))(this, name, file, delta, loop_a, loop_x, lock_y, lock_f, time);
        }

        void link_to_interior(char id, int refresh) {
            ((void(__thiscall*)(CPed*, char, int))OFFSET_BASED(offsets::ped::link_to_interior))(this, id, refresh);
        }

        void destroy_parachute() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::destroy_parachute))(this);
        }

        int is_on_ground() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::is_on_ground))(this);
        }

        void reset_damage_entity() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::reset_damage_entity))(this);
        }

        void remove_weapon_model(int model) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::remove_weapon_model))(this, model);
        }

        float get_aim_z() {
            return ((float(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_aim_z))(this);
        }

        void set_aim_z(float value) {
            ((void(__thiscall*)(CPed*, float))OFFSET_BASED(offsets::ped::set_aim_z))(this, value);
        }

        CEntity* get_contact_entity() {
            return ((CEntity * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_contact_entity))(this);
        }

        void* get_contact_vehicle() { // TODO: add CVehicle
            return ((void * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_contact_vehicle))(this);
        }

        int get_stat() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_stat))(this);
        }

        int performing_custom_animation() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::performing_custom_animation))(this);
        }

        void start_dancing(int style) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::start_dancing))(this, style);
        }

        void stop_dancing() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::stop_dancing))(this);
        }

        int does_dancing() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::does_dancing))(this);
        }

        const char* get_animation_for_dance(int move) {
            return ((const char*(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::get_animation_for_dance))(this, move);
        }

        void drop_stuff() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::drop_stuff))(this);
        }

        void process_drunk() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::process_drunk))(this);
        }

        int get_drunk_level() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_drunk_level))(this);
        }

        void set_drunk_level(int level) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::set_drunk_level))(this, level);
        }

        void enable_cellphone(int enabled) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::enable_cellphone))(this, enabled);
        }

        int using_cellphone() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::using_cellphone))(this);
        }

        void set_fighting_style(int style) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::set_fighting_style))(this, style);
        }

        void start_urinating() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::start_urinating))(this);
        }

        void stop_urinating() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::stop_urinating))(this);
        }

        int does_urinating() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::does_urinating))(this);
        }

        void get_bone_position(int bone, CVector* position) {
            ((void(__thiscall*)(CPed*, int, CVector*))OFFSET_BASED(offsets::ped::get_bone_position))(this, bone, position);
        }

        void set_keys(short state, short stick_x, short stick_y) {
            ((void(__thiscall*)(CPed*, short, short, short))OFFSET_BASED(offsets::ped::set_keys))(this, state, stick_x, stick_y);
        }

        void create_arrow(int color) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::create_arrow))(this, color);
        }

        void give_weapon(int weapon, int ammo) {
            ((void(__thiscall*)(CPed*, int, int))OFFSET_BASED(offsets::ped::give_weapon))(this, weapon, ammo);
        }

        void kill() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::kill))(this);
        }

        void give_stuff(int type) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::give_stuff))(this, type);
        }

        short get_keys(short* stick_x, short* stick_y) {
            return ((short(__thiscall*)(CPed*, short*, short*))OFFSET_BASED(offsets::ped::get_keys))(this, stick_x, stick_y);
        }

        int is_in_vehicle() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::is_in_vehicle))(this);
        }

        void destroy() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::destroy))(this);
        }

        void apply_command_task(const char* name, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11) {
            ((void(__thiscall*)(CPed*, const char*, int, int, int, int, int, int, int, int, int))OFFSET_BASED(offsets::ped::apply_command_task))(this, name, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        }

        void* get_current_weapon_slot() { // TODO: add CWeapon
            return ((void * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_current_weapon_slot))(this);
        }

        void set_camera_ext_zoom_and_aspect_ratio(float ext_zoom, float aspect_ratio) {
            ((void(__thiscall*)(CPed*, float, float))OFFSET_BASED(offsets::ped::set_camera_ext_zoom_and_aspect_ratio))(this, ext_zoom, aspect_ratio);
        }

        int has_accessory() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::has_accessory))(this);
        }

        void delete_accessory(int slot) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::delete_accessory))(this, slot);
        }

        int get_accessory_state(int slot) {
            return ((int(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::get_accessory_state))(this, slot);
        }

        void delete_all_accessories() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::delete_all_accessories))(this);
        }

        void add_accessory(int slot, const void* info) { // TODO: add Accessory
            ((void(__thiscall*)(CPed*, int, const void*))OFFSET_BASED(offsets::ped::add_accessory))(this, slot, info);
        }

        void* get_accessory(int slot) { // TODO: add CObject
            return ((void * (__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::get_accessory))(this, slot);
        }

        void SetModelIndex(int model) {
            ((void(__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::set_model_index))(this, model);
        }

        CPed* get_aimed_ped() {
            return ((CPed * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_aimed_ped))(this);
        }

        void destroy_command_task() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::destroy_command_task))(this);
        }

        int get_stuff() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_stuff))(this);
        }

        int apply_stuff() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::apply_stuff))(this);
        }

        float get_rotation() {
            return ((float(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_rotation))(this);
        }

        void remove_weapon_when_entering_vehicle() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::remove_weapon_when_entering_vehicle))(this);
        }

        int current_weapon_has_ammo() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::current_weapon_has_ammo))(this);
        }

        CEntity* get_floor() {
            return ((CEntity * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_floor))(this);
        }

        void* get_current_weapon_info() { // TODO: add CWeaponInfo
            return ((void * (__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_current_weapon_info))(this);
        }

        unsigned short get_current_weapon_ammo() {
            return ((unsigned short(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_current_weapon_ammo))(this);
        }

        void* get_weapon_slot(int weapon) { // TODO: add CWeapon
            return ((void * (__thiscall*)(CPed*, int))OFFSET_BASED(offsets::ped::get_weapon_slot))(this, weapon);
        }

        int open_parachute() {
            return ((int(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::open_parachute))(this);
        }

        void process_parachute_event(const char* name) {
            ((void(__thiscall*)(CPed*, const char*))OFFSET_BASED(offsets::ped::process_parachute_event))(this, name);
        }

        const char* get_loaded_shopping_data_subsection() {
            return ((const char*(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::get_loaded_shopping_data_subsection))(this);
        }

        void load_shopping_data_subsection(const char* name) {
            ((void(__thiscall*)(CPed*, const char*))OFFSET_BASED(offsets::ped::load_shopping_data_subsection))(this, name);
        }

        void set_weapon_ammo(unsigned char weapon, unsigned short ammo) {
            ((void(__thiscall*)(CPed*, unsigned char, unsigned short))OFFSET_BASED(offsets::ped::set_weapon_ammo))(this, weapon, ammo);
        }

        void process_dancing() {
            ((void(__thiscall*)(CPed*))OFFSET_BASED(offsets::ped::process_dancing))(this);
        }
    };
}


#endif // !PED_HPP