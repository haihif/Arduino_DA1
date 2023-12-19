#ifndef FLASH_H
#define FLASH_H

uint8_t flash_write(uint32_t buffer, uint32_t address);
uint8_t flash_read(uint32_t buffer, uint32_t address);

#endif