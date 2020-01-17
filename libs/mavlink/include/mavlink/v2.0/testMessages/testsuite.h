/** @file
 *    @brief MAVLink comm protocol testsuite generated from testMessages.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef TESTMESSAGES_TESTSUITE_H
#define TESTMESSAGES_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_testMessages(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_testMessages(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_bsvt_remote_control_turret(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bsvt_remote_control_turret_t packet_in = {
        17235,17339,17,84
    };
    mavlink_bsvt_remote_control_turret_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.axis_h = packet_in.axis_h;
        packet1.axis_v = packet_in.axis_v;
        packet1.control_mode = packet_in.control_mode;
        packet1.guidance_state = packet_in.guidance_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bsvt_remote_control_turret_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_pack(system_id, component_id, &msg , packet1.axis_h , packet1.axis_v , packet1.control_mode , packet1.guidance_state );
    mavlink_msg_bsvt_remote_control_turret_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.axis_h , packet1.axis_v , packet1.control_mode , packet1.guidance_state );
    mavlink_msg_bsvt_remote_control_turret_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bsvt_remote_control_turret_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_send(MAVLINK_COMM_1 , packet1.axis_h , packet1.axis_v , packet1.control_mode , packet1.guidance_state );
    mavlink_msg_bsvt_remote_control_turret_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bsvt_remote_control_turret_2(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bsvt_remote_control_turret_2_t packet_in = {
        17235,17339,17,84
    };
    mavlink_bsvt_remote_control_turret_2_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.axis_h = packet_in.axis_h;
        packet1.axis_v = packet_in.axis_v;
        packet1.control_mode = packet_in.control_mode;
        packet1.guidance_state = packet_in.guidance_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_2_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bsvt_remote_control_turret_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_2_pack(system_id, component_id, &msg , packet1.axis_h , packet1.axis_v , packet1.control_mode , packet1.guidance_state );
    mavlink_msg_bsvt_remote_control_turret_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_2_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.axis_h , packet1.axis_v , packet1.control_mode , packet1.guidance_state );
    mavlink_msg_bsvt_remote_control_turret_2_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bsvt_remote_control_turret_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bsvt_remote_control_turret_2_send(MAVLINK_COMM_1 , packet1.axis_h , packet1.axis_v , packet1.control_mode , packet1.guidance_state );
    mavlink_msg_bsvt_remote_control_turret_2_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_testMessages(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_bsvt_remote_control_turret(system_id, component_id, last_msg);
    mavlink_test_bsvt_remote_control_turret_2(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // TESTMESSAGES_TESTSUITE_H
