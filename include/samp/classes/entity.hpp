#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <samp/samp.hpp>
#include <samp/classes/matrix.hpp>


namespace samp::classes {
    class CEntity {
    public:
        void get_matrix(CMatrix* matrix) {
            ((void(__thiscall*)(CEntity*, CMatrix*))OFFSET_BASED(offsets::entity::get_matrix))(this, matrix);
        }

        void set_matrix(CMatrix matrix) {
            ((void(__thiscall*)(CEntity*, CMatrix))OFFSET_BASED(offsets::entity::set_matrix))(this, matrix);
        }

        void update_rw_frame() {
            ((void(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::update_rw_frame))(this);
        }

        void get_speed(CVector* vec) {
            ((void(__thiscall*)(CEntity*, CVector*))OFFSET_BASED(offsets::entity::get_speed))(this, vec);
        }

        void set_speed(CVector vec) {
            ((void(__thiscall*)(CEntity*, CVector))OFFSET_BASED(offsets::entity::set_speed))(this, vec);
        }

        void get_turn_speed(CVector* speed) {
            ((void(__thiscall*)(CEntity*, CVector*))OFFSET_BASED(offsets::entity::get_turn_speed))(this, speed);
        }

        void set_turn_speed(CVector speed) {
            ((void(__thiscall*)(CEntity*, CVector))OFFSET_BASED(offsets::entity::set_turn_speed))(this, speed);
        }

        void apply_turn_speed() {
            ((void(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::apply_turn_speed))(this);
        }

        float get_distance_from_centre_of_mass_to_base_of_model() {
            return ((float(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_distance_from_centre_of_mass_to_base_of_model))(this);
        }

        void get_bound_centre(CVector* centre) {
            ((void(__thiscall*)(CEntity*, CVector*))OFFSET_BASED(offsets::entity::get_bound_centre))(this, centre);
        }

        void set_model_index(int model) {
            ((void(__thiscall*)(CEntity*, int))OFFSET_BASED(offsets::entity::set_model_index))(this, model);
        }

        int get_model_index() {
            return ((int(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_model_index))(this);
        }

        void teleport(CVector position) {
            ((void(__thiscall*)(CEntity*, CVector))OFFSET_BASED(offsets::entity::teleport))(this, position);
        }

        float get_distance_to_local_player() {
            return ((float(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_distance_to_local_player))(this);
        }

        float get_distance_to_camera() {
            return ((float(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_distance_to_camera))(this);
        }

        float get_distance_to_local_player_no_height() {
            return ((float(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_distance_to_local_player_no_height))(this);
        }

        float get_distance_to_point(CVector position) {
            return ((float(__thiscall*)(CEntity*, CVector))OFFSET_BASED(offsets::entity::get_distance_to_point))(this, position);
        }

        int does_exist() {
            return ((int(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::does_exist))(this);
        }

        int enforce_world_boundries(float px, float zx, float py, float ny) {
            return ((int(__thiscall*)(CEntity*, float, float, float, float))OFFSET_BASED(offsets::entity::enforce_world_boundries))(this, px, zx, py, ny);
        }

        int has_exceeded_world_boundries(float px, float zx, float py, float ny) {
            return ((int(__thiscall*)(CEntity*, float, float, float, float))OFFSET_BASED(offsets::entity::has_exceeded_world_boundries))(this, px, zx, py, ny);
        }

        void set_clump_alpha(int value) {
            ((void(__thiscall*)(CEntity*, int))OFFSET_BASED(offsets::entity::set_clump_alpha))(this, value);
        }

        void set_from_euler(CVector angles) {
            ((void(__thiscall*)(CEntity*, CVector))OFFSET_BASED(offsets::entity::set_from_euler))(this, angles);
        }

        void get_euler_inverted(float* px, float* py, float* pz) {
            ((void(__thiscall*)(CEntity*, float*, float*, float*))OFFSET_BASED(offsets::entity::get_euler_inverted))(this, px, py, pz);
        }

        void apply_turn_speed(CVector direction, CVector velocity) {
            ((void(__thiscall*)(CEntity*, CVector, CVector))OFFSET_BASED(offsets::entity::apply_turn_speed))(this, direction, velocity);
        }

        int is_stationary() {
            return ((int(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::is_stationary))(this);
        }

        void* get_rw_object() { // TODO: add CRwObject
            return ((void * (__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_rw_object))(this);
        }

        int is_ignored() {
            return ((int(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::is_ignored))(this);
        }

        int get_collision_flag() {
            return ((int(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::get_collision_flag))(this);
        }

        void set_collision_flag(int enable) {
            ((void(__thiscall*)(CEntity*, int))OFFSET_BASED(offsets::entity::set_collision_flag))(this, enable);
        }

        void set_collision_processed(int processed) {
            ((void(__thiscall*)(CEntity*, int))OFFSET_BASED(offsets::entity::set_collision_processed))(this, processed);
        }

        void delete_rw_object() {
            ((void(__thiscall*)(CEntity*))OFFSET_BASED(offsets::entity::delete_rw_object))(this);
        }
    };
}


#endif // !ENTITY_HPP