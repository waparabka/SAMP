#ifndef PLAYER_POOL_HPP
#define PLAYER_POOL_HPP

#include <samp/samp.hpp>
#include <samp/classes/ped.hpp>
#include <samp/classes/object.hpp>


namespace samp::classes {
    class CPlayerPool {
    public:
        void process() {
            ((void(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::process))(this);
        }

        void set_at(uint16_t id, void* info) { // TODO: add CPlayerInfo
            ((void(__thiscall*)(CPlayerPool*, uint16_t, void*))OFFSET_BASED(offsets::player_pool::set_at))(this, id, info);
        }

        int delete_player(uint16_t id, int reason) {
            return ((int(__thiscall*)(CPlayerPool*, uint16_t, int))OFFSET_BASED(offsets::player_pool::delete_player))(this, id, reason);
        }

        void deactivate() {
            ((void(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::deactivate))(this);
        }

        int create(uint16_t id, const char* name, int is_npc) {
            return ((int(__thiscall*)(CPlayerPool*, uint16_t, const char*, int))OFFSET_BASED(offsets::player_pool::create))(this, id, name, is_npc);
        }

        const char* get_name(uint16_t id) {
            return ((const char*(__thiscall*)(CPlayerPool*, uint16_t))OFFSET_BASED(offsets::player_pool::get_name))(this, id);
        }

        int get_local_player_ping() {
            return ((int(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::get_local_player_ping))(this);
        }

        int get_local_player_score() {
            return ((int(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::get_local_player_score))(this);
        }

        uint16_t find(CPed* ped) {
            return ((uint16_t(__thiscall*)(CPlayerPool*, CPed*))OFFSET_BASED(offsets::player_pool::find))(this, ped);
        }

        int get_count(int include_npc) {
            return ((int(__thiscall*)(CPlayerPool*, int))OFFSET_BASED(offsets::player_pool::get_count))(this, include_npc);
        }

        void force_collision() {
            ((void(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::force_collision))(this);
        }

        void restore_collision() {
            ((void(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::restore_collision))(this);
        }

        const char* get_local_player_name() {
            return ((const char*(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::get_local_player_name))(this);
        }

        /*CRemotePlayer* CPlayerPool::GetPlayer(uint16_t nId) {
            return ((CRemotePlayer * (__thiscall*)(CPlayerPool*, uint16_t)) GetAddress(0x10F0))(this, nId);
        }

        CPlayerInfo* CPlayerPool::GetAt(uint16_t nId) {
            return ((CPlayerInfo * (__thiscall*)(CPlayerPool*, uint16_t)) GetAddress(0x10D0))(this, nId);
        }*/

        int is_connected(uint16_t id) {
            return ((int(__thiscall*)(CPlayerPool*, uint16_t))OFFSET_BASED(offsets::player_pool::is_connected))(this, id);
        }

        /*CLocalPlayer* get_local_player() {
            return ((CLocalPlayer * (__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::get_local_player))(this);
        }*/

        int get_score(uint16_t id) {
            return ((int(__thiscall*)(CPlayerPool*, uint16_t))OFFSET_BASED(offsets::player_pool::get_score))(this, id);
        }

        int get_ping(uint16_t id) {
            return ((int(__thiscall*)(CPlayerPool*, uint16_t))OFFSET_BASED(offsets::player_pool::get_ping))(this, id);
        }

        void update_largest_id() {
            ((void(__thiscall*)(CPlayerPool*))OFFSET_BASED(offsets::player_pool::update_largest_id))(this);
        }

        CObject* find_accessory(CObject* object) {
            return ((CObject * (__thiscall*)(CPlayerPool*, CObject*))OFFSET_BASED(offsets::player_pool::find_accessory))(this, object);
        }

        void set_local_player_name(const char* name) {
            ((void(__thiscall*)(CPlayerPool*, const char*))OFFSET_BASED(offsets::player_pool::set_local_player_name))(this, name);
        }
    };
}


#endif // !PLAYER_POOL_HPP