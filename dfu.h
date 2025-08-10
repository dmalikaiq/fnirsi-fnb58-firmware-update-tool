#pragma once

#include <stdio.h>
#include <stdint.h>

typedef uint8_t hid_buffer_t[64];

#define HID_BUFFER_SIZE         (sizeof(hid_buffer_t))
#define MAX_PACKET_PAYLOAD_SIZE (HID_BUFFER_SIZE - 2 /* endpoint + crc */ - 4 /* param */)

uint8_t crc8(const uint8_t *data, size_t len);
void debug_dump_bytes(const char *name, const uint8_t *buffer, size_t length);
bool read_file(const char *filename, void **out, size_t *size);
