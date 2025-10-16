#ifndef VEHICLE_POOL_HPP
#define VEHICLE_POOL_HPP

#include <samp/samp.hpp>
#include <samp/classes/vehicle.hpp>
#include <samp/math/vector.hpp>


namespace samp::classes {
    class CVehiclePool {
    public:
        void update_count() {
            ((void(__thiscall*)(CVehiclePool*))OFFSET_BASED(offsets::vehicle_pool::update_count))(this);
        }

        int delete_vehicle(uint16_t id) {
            return ((int(__thiscall*)(CVehiclePool*, uint16_t))OFFSET_BASED(offsets::vehicle_pool::delete_vehicle))(this, id);
        }

        void change_interior(uint16_t id, int interior_id) {
            ((void(__thiscall*)(CVehiclePool*, uint16_t, int))OFFSET_BASED(offsets::vehicle_pool::change_interior))(this, id, interior_id);
        }

        void set_params(uint16_t id, bool is_objective, bool is_locked) {
            ((void(__thiscall*)(CVehiclePool*, uint16_t, bool, bool))OFFSET_BASED(offsets::vehicle_pool::set_params))(this, id, is_objective, is_locked);
        }

        uint16_t find(CVehicle* game_object) {
            return ((uint16_t(__thiscall*)(CVehiclePool*, CVehicle*))OFFSET_BASED(offsets::vehicle_pool::find))(this, game_object);
        }

        int get_ref_by_id(int id) {
            return ((int(__thiscall*)(CVehiclePool*, int))OFFSET_BASED(offsets::vehicle_pool::get_ref_by_id))(this, id);
        }

        int get_ref_by_object(CVehicle* game_object) {
            return ((int(__thiscall*)(CVehiclePool*, CVehicle*))OFFSET_BASED(offsets::vehicle_pool::get_ref_by_object))(this, game_object);
        }

        uint16_t get_nearest() {
            return ((uint16_t(__thiscall*)(CVehiclePool*))OFFSET_BASED(offsets::vehicle_pool::get_nearest))(this);
        }

        uint16_t get_nearest_by_point(CVector point) {
            return ((uint16_t(__thiscall*)(CVehiclePool*, CVector))OFFSET_BASED(offsets::vehicle_pool::get_nearest_by_point))(this, point);
        }

        void add_to_waiting_list(const struct VehicleInfo* info) {
            ((void(__thiscall*)(CVehiclePool*, const VehicleInfo*))OFFSET_BASED(offsets::vehicle_pool::add_to_waiting_list))(this, info);
        }

        void construct_license_plates() {
            ((void(__thiscall*)(CVehiclePool*))OFFSET_BASED(offsets::vehicle_pool::construct_license_plates))(this);
        }

        void shutdown_license_plates() {
            ((void(__thiscall*)(CVehiclePool*))OFFSET_BASED(offsets::vehicle_pool::shutdown_license_plates))(this);
        }

        int create(VehicleInfo* info) {
            return ((int(__thiscall*)(CVehiclePool*, VehicleInfo*))OFFSET_BASED(offsets::vehicle_pool::create))(this, info);
        }

        void send_destroy_notification(uint16_t id) {
            ((void(__thiscall*)(CVehiclePool*, uint16_t))OFFSET_BASED(offsets::vehicle_pool::send_destroy_notification))(this, id);
        }

        void process_waiting_list() {
            ((void(__thiscall*)(CVehiclePool*))OFFSET_BASED(offsets::vehicle_pool::process_waiting_list))(this);
        }

        void process() {
            ((void(__thiscall*)(CVehiclePool*))OFFSET_BASED(offsets::vehicle_pool::process))(this);
        }

        CVehicle* get(uint16_t id) {
            return ((CVehicle*(__thiscall*)(CVehiclePool*, uint16_t))OFFSET_BASED(offsets::vehicle_pool::get))(this, id);
        }

        int does_exist(uint16_t id) {
            return ((int(__thiscall*)(CVehiclePool*, uint16_t))OFFSET_BASED(offsets::vehicle_pool::does_exist))(this, id);
        }
    };
}


#endif // !VEHICLE_POOL_HPP