#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <samp/samp.hpp>
#include <samp/math/vector.hpp>
#include <samp/classes/entity.hpp>


namespace samp::classes {
    class CCamera {
    public:
        void detach() {
            ((void(__thiscall*)(CCamera*))OFFSET_BASED(offsets::camera::detach))(this);
        }

        void set(CVector position, CVector rotation) {
            ((void(__thiscall*)(CCamera*, CVector, CVector))OFFSET_BASED(offsets::camera::set))(this, position, rotation);
        }

        void point_at(CVector position, int style) {
            ((void(__thiscall*)(CCamera*, CVector, int))OFFSET_BASED(offsets::camera::point_at))(this, position, style);
        }

        void restore() {
            ((void(__thiscall*)(CCamera*))OFFSET_BASED(offsets::camera::restore))(this);
        }

        void set_track_vector(CVector* point, CVector* transverse_to, int time, bool smooth) {
            ((void(__thiscall*)(CCamera*, CVector*, CVector*, unsigned int, bool))OFFSET_BASED(offsets::camera::set_track_vector))(this, point, transverse_to, time, smooth);
        }

        void set_move_vector(CVector* camera, CVector* position, int time, bool smooth) {
            ((void(__thiscall*)(CCamera*, CVector*, CVector*, unsigned int, bool))OFFSET_BASED(offsets::camera::set_move_vector))(this, camera, position, time, smooth);
        }

        void set_to_owner() {
            ((void(__thiscall*)(CCamera*))OFFSET_BASED(offsets::camera::set_to_owner))(this);
        }

        void attach(CEntity* entity) {
            ((void(__thiscall*)(CCamera*, CEntity*))OFFSET_BASED(offsets::camera::attach))(this, entity);
        }

        void get_matrix(CMatrix* matrix) {
            ((void(__thiscall*)(CCamera*, CMatrix*))OFFSET_BASED(offsets::camera::get_matrix))(this, matrix);
        }

        float get_distance_to_point(CVector* position) {
            return ((float(__thiscall*)(CCamera*, CVector*))OFFSET_BASED(offsets::camera::get_distance_to_point))(this, position);
        }

        void fade(int in) {
            ((void(__thiscall*)(CCamera*, int))OFFSET_BASED(offsets::camera::fade))(this, in);
        }

        void set_matrix(CMatrix matrix) {
            ((void(__thiscall*)(CCamera*, CMatrix))OFFSET_BASED(offsets::camera::set_matrix))(this, matrix);
        }

        void take_control(CEntity* target, short mode_to_goto, short type_of_switch) {
            ((void(__thiscall*)(CCamera*, CEntity*, short, short))OFFSET_BASED(offsets::camera::take_control))(this, target, mode_to_goto, type_of_switch);
        }
    };
}


#endif // !CAMERA_HPP