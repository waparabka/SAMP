#ifndef PICKUP_POOL_HPP
#define PICKUP_POOL_HPP

#include <samp/samp.hpp>
#include <samp/math/vector.hpp>


namespace samp::classes {
    class CPickupPool {
    public:
    #pragma pack(push, 1)
        struct Pickup {
            int     model;
            int     type;
            CVector position;
        };
    #pragma pack(pop)


        void create(Pickup* data, int id) {
            ((void(__thiscall*)(CPickupPool*, Pickup*, int))OFFSET_BASED(offsets::pickup_pool::create))(this, data, id);
        }

        void create_weapon(int model, CVector position, int ammo, uint16_t ex_owner) {
            ((void(__thiscall*)(CPickupPool*, int, CVector, int, uint16_t))OFFSET_BASED(offsets::pickup_pool::create_weapon))(this, model, position, ammo, ex_owner);
        }

        void delete_pickup(int id) {
            ((void(__thiscall*)(CPickupPool*, int))OFFSET_BASED(offsets::pickup_pool::delete_pickup))(this, id);
        }

        void delete_weapon(uint16_t ex_owner) {
            ((void(__thiscall*)(CPickupPool*, uint16_t))OFFSET_BASED(offsets::pickup_pool::delete_weapon))(this, ex_owner);
        }

        int get_index(int id) {
            return ((int(__thiscall*)(CPickupPool*, int))OFFSET_BASED(offsets::pickup_pool::get_index))(this, id);
        }

        void send_notification(int id) {
            ((void(__thiscall*)(CPickupPool*, int))OFFSET_BASED(offsets::pickup_pool::send_notification))(this, id);
        }

        void process() {
            ((void(__thiscall*)(CPickupPool*))OFFSET_BASED(offsets::pickup_pool::process))(this);
        }
    };
}


#endif // !PICKUP_POOL_HPP