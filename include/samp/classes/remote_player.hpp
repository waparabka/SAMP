#ifndef REMOTE_PLAYER_HPP
#define REMOTE_PLAYER_HPP

#include <samp/samp.hpp>
#include <samp/classes/ped.hpp>
#include <samp/math/vector.hpp>
#include <samp/math/matrix.hpp>


namespace samp::classes {
    class CRemotePlayer {
    public:
        void process() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::process))(this);
        }

        void process_head() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::process_head))(this);
        }

        void set_marker_state(int state) {
            ((void(__thiscall*)(CRemotePlayer*, int))OFFSET_BASED(offsets::remote_player::set_marker_state))(this, state);
        }

        void set_marker_position(int x, int y, int z) {
            ((void(__thiscall*)(CRemotePlayer*, int, int, int))OFFSET_BASED(offsets::remote_player::set_marker_position))(this, x, y, z);
        }

        int surfing() {
            return ((int(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::surfing_on_vehicle))(this);
        }

        int surfing_on_object() {
            return ((int(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::surfing_on_object))(this);
        }

        void process_surfing() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::process_surfing))(this);
        }

        void on_enter_vehicle() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::on_enter_vehicle))(this);
        }

        void on_exit_vehicle() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::on_exit_vehicle))(this);
        }

        void process_special_action() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::process_special_action))(this);
        }

        void update(struct AimData* data) {
            ((void(__thiscall*)(CRemotePlayer*, struct AimData*))OFFSET_BASED(offsets::remote_player::update_aim_data))(this, data);
        }

        void update(struct UnoccupiedData* data) {
            ((void(__thiscall*)(CRemotePlayer*, struct UnoccupiedData*))OFFSET_BASED(offsets::remote_player::update_unoccupied_data))(this, data);
        }

        void update(struct TrailerData* data) {
            ((void(__thiscall*)(CRemotePlayer*, struct TrailerData*))OFFSET_BASED(offsets::remote_player::update_trailer_data))(this, data);
        }

        void reset_data() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::reset_data))(this);
        }

        float get_distance_to_player(CRemotePlayer* player) {
            return ((float(__thiscall*)(CRemotePlayer*, CRemotePlayer*))OFFSET_BASED(offsets::remote_player::get_distance_to_player))(this, player);
        }

        void change_state(char old_state, char new_state) {
            ((void(__thiscall*)(CRemotePlayer*, char, char))OFFSET_BASED(offsets::remote_player::change_state))(this, old_state, new_state);
        }

        int get_status() {
            return ((int(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::get_status))(this);
        }

        int spawn(int a2, int model, CVector* position, float rotation, unsigned long color, char fighting_style) {
            return ((int(__thiscall*)(CRemotePlayer*, int, int, CVector*, float, unsigned long, char))OFFSET_BASED(offsets::remote_player::spawn))(this, a2, model, position, rotation, color, fighting_style);
        }

        void update(struct OnfootData* data, unsigned long timestamp) {
            ((void(__thiscall*)(CRemotePlayer*, struct OnfootData*, unsigned long))OFFSET_BASED(offsets::remote_player::update_onfoot_data))(this, data, timestamp);
        }

        void update(struct IncarData* data, unsigned long timestamp) {
            ((void(__thiscall*)(CRemotePlayer*, struct IncarData*, unsigned long))OFFSET_BASED(offsets::remote_player::update_incar_data))(this, data, timestamp);
        }

        void update(struct PassengerData* data, unsigned long timestamp) {
            ((void(__thiscall*)(CRemotePlayer*, struct PassengerData*, unsigned long))OFFSET_BASED(offsets::remote_player::update_passenger_data))(this, data, timestamp);
        }

        void remove() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::remove))(this);
        }

        void kill() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::kill))(this);
        }

        void chat(const char* text) {
            ((void(__thiscall*)(CRemotePlayer*, const char*))OFFSET_BASED(offsets::remote_player::chat))(this, text);
        }

        float get_distance_to_local_player() {
            return ((float(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::get_distance_to_local_player))(this);
        }

        void exit_vehicle() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::exit_vehicle))(this);
        }

        void enter_vehicle(uint16_t vehicle, int passenger) {
            ((void(__thiscall*)(CRemotePlayer*, uint16_t, int))OFFSET_BASED(offsets::remote_player::enter_vehicle))(this, vehicle, passenger);
        }

        unsigned long get_color_as_argb() {
            return ((unsigned long(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::get_color_as_argb))(this);
        }

        unsigned long get_color_as_rgba() {
            return ((unsigned long(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::get_color_as_rgba))(this);
        }

        void set_color(unsigned long color) {
            ((void(__thiscall*)(CRemotePlayer*, unsigned long))OFFSET_BASED(offsets::remote_player::set_color))(this, color);
        }

        void set_onfoot_target_speed_and_position(CVector* position, CVector* speed) {
            ((void(__thiscall*)(CRemotePlayer*, CVector*, CVector*))OFFSET_BASED(offsets::remote_player::set_onfoot_target_speed_and_position))(this, position, speed);
        }

        void update(struct BulletData* data) {
            ((void(__thiscall*)(CRemotePlayer*, struct BulletData*))OFFSET_BASED(offsets::remote_player::update_bullet_data))(this, data);
        }

        int does_exist() {
            return ((int(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::does_exist))(this);
        }

        void update_onfoot_rotation() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::update_onfoot_rotation))(this);
        }

        void update_onfoot_speed_and_position() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::update_onfoot_speed_and_position))(this);
        }

        void update_incar_speed_and_position() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::update_incar_speed_and_position))(this);
        }

        void update_incar_rotation() {
            ((void(__thiscall*)(CRemotePlayer*))OFFSET_BASED(offsets::remote_player::update_incar_rotation))(this);
        }

        void set_incar_target_speed_and_position(CMatrix* matrix, CVector* position, CVector* speed) {
            ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, CVector*))OFFSET_BASED(offsets::remote_player::set_incar_target_speed_and_position))(this, matrix, position, speed);
        }

        void update_train(CMatrix* matrix, CVector* speed, float speed_val) {
            ((void(__thiscall*)(CRemotePlayer*, CMatrix*, CVector*, float))OFFSET_BASED(offsets::remote_player::update_train))(this, matrix, speed, speed_val);
        }

        CPed* get_ped() {
            return ((CPed*)((uintptr_t)this + OFFSET(offsets::remote_player::get_ped)));
        }

        float get_health() {
            return *(float*)((uintptr_t)this + OFFSET(offsets::remote_player::get_health));
        }

        float get_armor() {
            return *(float*)((uintptr_t)this + OFFSET(offsets::remote_player::get_armor));
        }
    };
}


#endif // !REMOTE_PLAYER_HPP