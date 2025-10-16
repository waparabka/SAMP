#ifndef NETGAME_HPP
#define NETGAME_HPP

#include <samp/samp.hpp>
#include <samp/classes/player_pool.hpp>
#include <samp/math/vector.hpp>

#include <rakhook/raknet/BitStream.h>
#include <rakhook/raknet/RakClientInterface.h>


namespace samp::classes {
    class CNetGame {
    public:
        void initialize_game_logic() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::initialize_game_logic))(this);
        }

        void packet_disconnection_notification(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_disconnection_notification))(this, packet);
        }

        void delete_marker(unsigned char index) {
            ((void(__thiscall*)(CNetGame*, unsigned char))OFFSET_BASED(offsets::netgame::delete_marker))(this, index);
        }

        void reset_vehicle_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_vehicle_pool))(this);
        }

        void reset_text_draw_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_text_draw_pool))(this);
        }

        void reset_object_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_object_pool))(this);
        }

        void reset_gang_zone_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_gang_zone_pool))(this);
        }

        void reset_pickup_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_pickup_pool))(this);
        }

        void reset_menu_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_menu_pool))(this);
        }

        void reset_label_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_label_pool))(this);
        }

        void reset_actor_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_actor_pool))(this);
        }

        void packet_unoccupied_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_unoccupied_sync))(this, packet);
        }

        void packet_bullet_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_bullet_sync))(this, packet);
        }

        void packet_aim_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_aim_sync))(this, packet);
        }

        void packet_passenger_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_passenger_sync))(this, packet);
        }

        void packet_trailer_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_trailer_sync))(this, packet);
        }

        void packet_markers_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_markers_sync))(this, packet);
        }

        void packet_auth_key(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_auth_key))(this, packet);
        }

        void packet_player_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_player_sync))(this, packet);
        }

        void packet_vehicle_sync(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_vehicle_sync))(this, packet);
        }

        void packet_connection_lost(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_connection_lost))(this, packet);
        }

        void packet_connection_succeeded(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_connection_succeeded))(this, packet);
        }

        void update_network() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::update_network))(this);
        }

        void shutdown_for_restart() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::shutdown_for_restart))(this);
        }

        void create_marker(unsigned char index, CVector position, char icon, int color, int type) {
            ((void(__thiscall*)(CNetGame*, unsigned char, CVector, char, int, int))OFFSET_BASED(offsets::netgame::create_marker))(this, index, position, icon, color, type);
        }

        void reset_markers() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_markers))(this);
        }

        CPlayerPool* CNetGame::GetPlayerPool() {
            return ((CPlayerPool * (__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::get_player_pool))(this);
        }

        /*CObjectPool* CNetGame::GetObjectPool() {
            return ((CObjectPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E00))(this);
        }

        CActorPool* CNetGame::GetActorPool() {
            return ((CActorPool * (__thiscall*)(CNetGame*)) GetAddress(0x2E10))(this);
        }

        CVehiclePool* CNetGame::GetVehiclePool() {
            return ((CVehiclePool * (__thiscall*)(CNetGame*)) GetAddress(0x1170))(this);
        }

        CPickupPool* CNetGame::GetPickupPool() {
            return ((CPickupPool * (__thiscall*)(CNetGame*)) GetAddress(0x8130))(this);
        }

        CMenuPool* CNetGame::GetMenuPool() {
            return ((CMenuPool * (__thiscall*)(CNetGame*)) GetAddress(0x8140))(this);
        }*/

        void set_state(int state) {
            ((void(__thiscall*)(CNetGame*, int))OFFSET_BASED(offsets::netgame::set_state))(this, state);
        }

        int get_state() {
            return ((int(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::get_state))(this);
        }

        int lan_mode() {
            return ((int(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::lan_mode))(this);
        }

        void process_game_stuff() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::process_game_stuff))(this);
        }

        void packet_rsa_public_key_mismatch(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_rsa_public_key_mismatch))(this, packet);
        }

        void packet_connection_banned(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_connection_banned))(this, packet);
        }

        void packet_no_free_incoming_connections(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_no_free_incoming_connections))(this, packet);
        }

        void packet_invalid_password(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_invalid_password))(this, packet);
        }

        void packet_connection_attempt_failed(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_connection_attempt_failed))(this, packet);
        }

        void update_players() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::update_players))(this);
        }

        void initialize_pools() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::initialize_pools))(this);
        }

        void initial_notification() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::initial_notification))(this);
        }

        RakClientInterface* get_rak_client() {
            return ((RakClientInterface * (__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::get_rak_client))(this);
        }

        __int64 get_counter() {
            return ((__int64(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::get_counter))(this);
        }

        void reset_player_pool() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_player_pool))(this);
        }

        void packet_connection_request_accepted(Packet* packet) {
            ((void(__thiscall*)(CNetGame*, Packet*))OFFSET_BASED(offsets::netgame::packet_connection_request_accepted))(this, packet);
        }

        void reset_pools() {
            ((void(__thiscall*)(CNetGame*))OFFSET_BASED(offsets::netgame::reset_pools))(this);
        }
    };

    inline CNetGame*& netgame() {
		return *(CNetGame**)OFFSET_BASED(offsets::netgame::reference);
	}
}


#endif // !NETGAME_HPP