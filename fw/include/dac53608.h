#ifndef DAC53608_H__
#define DAC53608_H__

#include <stdbool.h>
#include <stdint.h>

void dac_reset();
uint8_t dac_read_id();
bool dac_write_channel(uint8_t index, uint16_t val);

#endif
