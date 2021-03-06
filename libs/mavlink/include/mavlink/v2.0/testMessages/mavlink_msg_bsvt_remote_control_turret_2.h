#pragma once
// MESSAGE BSVT_REMOTE_CONTROL_TURRET_2 PACKING

#define MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2 3004

MAVPACKED(
typedef struct __mavlink_bsvt_remote_control_turret_2_t {
 int16_t axis_h; /*<  Horizontal speed from -1 to +1 stretched from -32768 to 32767*/
 int16_t axis_v; /*<  Vertical position from -1 to +1 stretched from -32768 to 32767*/
 uint8_t control_mode; /*<  Mode of turret control (0 - manual, 1 - network)*/
 uint8_t guidance_state; /*<  State of guidance (0 - off, 1 - on)*/
}) mavlink_bsvt_remote_control_turret_2_t;

#define MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN 6
#define MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN 6
#define MAVLINK_MSG_ID_3004_LEN 6
#define MAVLINK_MSG_ID_3004_MIN_LEN 6

#define MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC 98
#define MAVLINK_MSG_ID_3004_CRC 98



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BSVT_REMOTE_CONTROL_TURRET_2 { \
    3004, \
    "BSVT_REMOTE_CONTROL_TURRET_2", \
    4, \
    {  { "axis_h", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_bsvt_remote_control_turret_2_t, axis_h) }, \
         { "axis_v", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_bsvt_remote_control_turret_2_t, axis_v) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_bsvt_remote_control_turret_2_t, control_mode) }, \
         { "guidance_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_bsvt_remote_control_turret_2_t, guidance_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BSVT_REMOTE_CONTROL_TURRET_2 { \
    "BSVT_REMOTE_CONTROL_TURRET_2", \
    4, \
    {  { "axis_h", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_bsvt_remote_control_turret_2_t, axis_h) }, \
         { "axis_v", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_bsvt_remote_control_turret_2_t, axis_v) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_bsvt_remote_control_turret_2_t, control_mode) }, \
         { "guidance_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_bsvt_remote_control_turret_2_t, guidance_state) }, \
         } \
}
#endif

/**
 * @brief Pack a bsvt_remote_control_turret_2 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param axis_h  Horizontal speed from -1 to +1 stretched from -32768 to 32767
 * @param axis_v  Vertical position from -1 to +1 stretched from -32768 to 32767
 * @param control_mode  Mode of turret control (0 - manual, 1 - network)
 * @param guidance_state  State of guidance (0 - off, 1 - on)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bsvt_remote_control_turret_2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t axis_h, int16_t axis_v, uint8_t control_mode, uint8_t guidance_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN];
    _mav_put_int16_t(buf, 0, axis_h);
    _mav_put_int16_t(buf, 2, axis_v);
    _mav_put_uint8_t(buf, 4, control_mode);
    _mav_put_uint8_t(buf, 5, guidance_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN);
#else
    mavlink_bsvt_remote_control_turret_2_t packet;
    packet.axis_h = axis_h;
    packet.axis_v = axis_v;
    packet.control_mode = control_mode;
    packet.guidance_state = guidance_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
}

/**
 * @brief Pack a bsvt_remote_control_turret_2 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param axis_h  Horizontal speed from -1 to +1 stretched from -32768 to 32767
 * @param axis_v  Vertical position from -1 to +1 stretched from -32768 to 32767
 * @param control_mode  Mode of turret control (0 - manual, 1 - network)
 * @param guidance_state  State of guidance (0 - off, 1 - on)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bsvt_remote_control_turret_2_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t axis_h,int16_t axis_v,uint8_t control_mode,uint8_t guidance_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN];
    _mav_put_int16_t(buf, 0, axis_h);
    _mav_put_int16_t(buf, 2, axis_v);
    _mav_put_uint8_t(buf, 4, control_mode);
    _mav_put_uint8_t(buf, 5, guidance_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN);
#else
    mavlink_bsvt_remote_control_turret_2_t packet;
    packet.axis_h = axis_h;
    packet.axis_v = axis_v;
    packet.control_mode = control_mode;
    packet.guidance_state = guidance_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
}

/**
 * @brief Encode a bsvt_remote_control_turret_2 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bsvt_remote_control_turret_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bsvt_remote_control_turret_2_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bsvt_remote_control_turret_2_t* bsvt_remote_control_turret_2)
{
    return mavlink_msg_bsvt_remote_control_turret_2_pack(system_id, component_id, msg, bsvt_remote_control_turret_2->axis_h, bsvt_remote_control_turret_2->axis_v, bsvt_remote_control_turret_2->control_mode, bsvt_remote_control_turret_2->guidance_state);
}

/**
 * @brief Encode a bsvt_remote_control_turret_2 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bsvt_remote_control_turret_2 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bsvt_remote_control_turret_2_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bsvt_remote_control_turret_2_t* bsvt_remote_control_turret_2)
{
    return mavlink_msg_bsvt_remote_control_turret_2_pack_chan(system_id, component_id, chan, msg, bsvt_remote_control_turret_2->axis_h, bsvt_remote_control_turret_2->axis_v, bsvt_remote_control_turret_2->control_mode, bsvt_remote_control_turret_2->guidance_state);
}

/**
 * @brief Send a bsvt_remote_control_turret_2 message
 * @param chan MAVLink channel to send the message
 *
 * @param axis_h  Horizontal speed from -1 to +1 stretched from -32768 to 32767
 * @param axis_v  Vertical position from -1 to +1 stretched from -32768 to 32767
 * @param control_mode  Mode of turret control (0 - manual, 1 - network)
 * @param guidance_state  State of guidance (0 - off, 1 - on)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bsvt_remote_control_turret_2_send(mavlink_channel_t chan, int16_t axis_h, int16_t axis_v, uint8_t control_mode, uint8_t guidance_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN];
    _mav_put_int16_t(buf, 0, axis_h);
    _mav_put_int16_t(buf, 2, axis_v);
    _mav_put_uint8_t(buf, 4, control_mode);
    _mav_put_uint8_t(buf, 5, guidance_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2, buf, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
#else
    mavlink_bsvt_remote_control_turret_2_t packet;
    packet.axis_h = axis_h;
    packet.axis_v = axis_v;
    packet.control_mode = control_mode;
    packet.guidance_state = guidance_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2, (const char *)&packet, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
#endif
}

/**
 * @brief Send a bsvt_remote_control_turret_2 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bsvt_remote_control_turret_2_send_struct(mavlink_channel_t chan, const mavlink_bsvt_remote_control_turret_2_t* bsvt_remote_control_turret_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bsvt_remote_control_turret_2_send(chan, bsvt_remote_control_turret_2->axis_h, bsvt_remote_control_turret_2->axis_v, bsvt_remote_control_turret_2->control_mode, bsvt_remote_control_turret_2->guidance_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2, (const char *)bsvt_remote_control_turret_2, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
#endif
}

#if MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bsvt_remote_control_turret_2_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t axis_h, int16_t axis_v, uint8_t control_mode, uint8_t guidance_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 0, axis_h);
    _mav_put_int16_t(buf, 2, axis_v);
    _mav_put_uint8_t(buf, 4, control_mode);
    _mav_put_uint8_t(buf, 5, guidance_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2, buf, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
#else
    mavlink_bsvt_remote_control_turret_2_t *packet = (mavlink_bsvt_remote_control_turret_2_t *)msgbuf;
    packet->axis_h = axis_h;
    packet->axis_v = axis_v;
    packet->control_mode = control_mode;
    packet->guidance_state = guidance_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2, (const char *)packet, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_MIN_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_CRC);
#endif
}
#endif

#endif

// MESSAGE BSVT_REMOTE_CONTROL_TURRET_2 UNPACKING


/**
 * @brief Get field axis_h from bsvt_remote_control_turret_2 message
 *
 * @return  Horizontal speed from -1 to +1 stretched from -32768 to 32767
 */
static inline int16_t mavlink_msg_bsvt_remote_control_turret_2_get_axis_h(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field axis_v from bsvt_remote_control_turret_2 message
 *
 * @return  Vertical position from -1 to +1 stretched from -32768 to 32767
 */
static inline int16_t mavlink_msg_bsvt_remote_control_turret_2_get_axis_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Get field control_mode from bsvt_remote_control_turret_2 message
 *
 * @return  Mode of turret control (0 - manual, 1 - network)
 */
static inline uint8_t mavlink_msg_bsvt_remote_control_turret_2_get_control_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field guidance_state from bsvt_remote_control_turret_2 message
 *
 * @return  State of guidance (0 - off, 1 - on)
 */
static inline uint8_t mavlink_msg_bsvt_remote_control_turret_2_get_guidance_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a bsvt_remote_control_turret_2 message into a struct
 *
 * @param msg The message to decode
 * @param bsvt_remote_control_turret_2 C-struct to decode the message contents into
 */
static inline void mavlink_msg_bsvt_remote_control_turret_2_decode(const mavlink_message_t* msg, mavlink_bsvt_remote_control_turret_2_t* bsvt_remote_control_turret_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bsvt_remote_control_turret_2->axis_h = mavlink_msg_bsvt_remote_control_turret_2_get_axis_h(msg);
    bsvt_remote_control_turret_2->axis_v = mavlink_msg_bsvt_remote_control_turret_2_get_axis_v(msg);
    bsvt_remote_control_turret_2->control_mode = mavlink_msg_bsvt_remote_control_turret_2_get_control_mode(msg);
    bsvt_remote_control_turret_2->guidance_state = mavlink_msg_bsvt_remote_control_turret_2_get_guidance_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN? msg->len : MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN;
        memset(bsvt_remote_control_turret_2, 0, MAVLINK_MSG_ID_BSVT_REMOTE_CONTROL_TURRET_2_LEN);
    memcpy(bsvt_remote_control_turret_2, _MAV_PAYLOAD(msg), len);
#endif
}
