#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <samp/samp.hpp>
#include <samp/classes/vehicle.hpp>
#include <samp/math/matrix.hpp>


namespace samp::classes {
    class CObject {
    public:
        float get_distance(const CMatrix* matrix) {
            return ((float(__thiscall*)(CObject*, const CMatrix*))OFFSET_BASED(offsets::object::get_distance))(this, matrix);
        }

        void stop() {
            ((void(__thiscall*)(CObject*))OFFSET_BASED(offsets::object::stop))(this);
        }

        void set_rotation(const CVector* rotation) {
            ((void(__thiscall*)(CObject*, const CVector*))OFFSET_BASED(offsets::object::set_rotation))(this, rotation);
        }

        void attach_to_vehicle(CVehicle* vehicle) {
            ((void(__thiscall*)(CObject*, CVehicle*))OFFSET_BASED(offsets::object::attach_to_vehicle))(this, vehicle);
        }

        void attach_to_object(CObject* object) {
            ((void(__thiscall*)(CObject*, CObject*))OFFSET_BASED(offsets::object::attach_to_object))(this, object);
        }

        void rotate(CVector rotation) {
            ((void(__thiscall*)(CObject*, CVector))OFFSET_BASED(offsets::object::rotate))(this, rotation);
        }

        void process(float elapsed) {
            ((void(__thiscall*)(CObject*, float))OFFSET_BASED(offsets::object::process))(this, elapsed);
        }

        void set_attached_to_vehicle(uint16_t id, const CVector* offset, const CVector* rotation) {
            ((void(__thiscall*)(CObject*, uint16_t, const CVector*, const CVector*))OFFSET_BASED(offsets::object::set_attached_to_vehicle))(this, id, offset, rotation);
        }

        void set_attached_to_object(uint16_t id, const CVector* offset, const CVector* rotation, char a5) {
            ((void(__thiscall*)(CObject*, uint16_t, const CVector*, const CVector*, char))OFFSET_BASED(offsets::object::set_attached_to_object))(this, id, offset, rotation, a5);
        }

        int attached_to_moving_entity() {
            return ((int(__thiscall*)(CObject*))OFFSET_BASED(offsets::object::attached_to_moving_entity))(this);
        }

        void set_material(int model, int id, const char* txd, const char* texture, unsigned long color) {
            ((void(__thiscall*)(CObject*, int, int, const char*, const char*, unsigned long))OFFSET_BASED(offsets::object::set_material))(this, model, id, txd, texture, color);
        }

        void set_material_text(int id, const char* text, char material_size, const char* font, char font_size, bool bold, unsigned long font_color, unsigned long background_color, char align) {
            ((void(__thiscall*)(CObject*, int, const char*, char, const char*, char, bool, unsigned long, unsigned long, char))OFFSET_BASED(offsets::object::set_material_text))(this, id, text, material_size, font, font_size, bold, font_color, background_color, align);
        }

        bool get_material_size(int size, int* x, int* y) {
            return ((bool(__thiscall*)(CObject*, int, int*, int*))OFFSET_BASED(offsets::object::get_material_size))(this, size, x, y);
        }

        void render() {
            ((void(__thiscall*)(CObject*))OFFSET_BASED(offsets::object::render))(this);
        }

        void construct_material_text() {
            ((void(__thiscall*)(CObject*))OFFSET_BASED(offsets::object::construct_material_text))(this);
        }

        void draw() {
            ((void(__thiscall*)(CObject*))OFFSET_BASED(offsets::object::draw))(this);
        }

        void shutdown_material_text() {
            ((void(__thiscall*)(CObject*))OFFSET_BASED(offsets::object::shutdown_material_text))(this);
        }
    };
}


#endif // !OBJECT_HPP