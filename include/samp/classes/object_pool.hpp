#ifndef OBJECT_POOL_HPP
#define OBJECT_POOL_HPP

#include <samp/samp.hpp>
#include <samp/classes/object.hpp>


namespace samp::classes {
    class CObjectPool {
    public:
        void update_largest_id() {
            ((void(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::update_largest_id))(this);
        }

        int get_count() {
            return ((int(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::get_count))(this);
        }

        int delete_object(uint16_t id) {
            return ((int(__thiscall*)(CObjectPool*, uint16_t))OFFSET_BASED(offsets::object_pool::delete_object))(this, id);
        }

        int create(uint16_t id, int model, CVector position, CVector rotation, float draw_distance) {
            return ((int(__thiscall*)(CObjectPool*, uint16_t, int, CVector, CVector, float))OFFSET_BASED(offsets::object_pool::create))(this, id, model, position, rotation, draw_distance);
        }

        CObject* find(CObject* game_object) {
            return ((CObject*(__thiscall*)(CObjectPool*, CObject*))OFFSET_BASED(offsets::object_pool::find))(this, game_object);
        }

        int get_id(CObject* object) {
            return ((int(__thiscall*)(CObjectPool*, CObject*))OFFSET_BASED(offsets::object_pool::get_id))(this, object);
        }

        void process() {
            ((void(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::process))(this);
        }

        void construct_materials() {
            ((void(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::construct_materials))(this);
        }

        void shutdown_materials() {
            ((void(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::shutdown_materials))(this);
        }

        void draw() {
            ((void(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::draw))(this);
        }

        void draw_last() {
            ((void(__thiscall*)(CObjectPool*))OFFSET_BASED(offsets::object_pool::draw_last))(this);
        }

        CObject* get(uint16_t id) {
            return ((CObject*(__thiscall*)(CObjectPool*, uint16_t))OFFSET_BASED(offsets::object_pool::get))(this, id);
        }
    };
}


#endif // !OBJECT_POOL_HPP