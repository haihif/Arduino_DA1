#include "flash.h"
#include "ESP_EEPROM.h"
#include "stdint.h"

uint8_t flash_write(uint32_t buffer, uint32_t address);
uint8_t flash_read(uint32_t buffer, uint32_t address);

void flash_init(){
    EEPROM.begin(1024);
}

uint8_t flash_write(uint32_t buffer, uint32_t address){
    EEPROM.put(address, buffer);
    return EEPROM.commit();
}

uint8_t flash_read(uint32_t buffer, uint32_t address){
    EEPROM.get(address, buffer);
    return EEPROM.commit();
}
