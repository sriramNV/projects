#include "WADReader.h"


uint16_t WADReader::read2Bytes(const uint8_t* pWADData, int offset)
{
    uint16_t ReadValue;
    std::memcpy(&ReadValue, pWADData + offset, sizeof(uint16_t));
    return ReadValue;
}

uint32_t WADReader::read4Bytes(const uint8_t* pWADData, int offset)
{
    uint32_t ReadValue;
    std::memcpy(&ReadValue, pWADData + offset, sizeof(uint32_t));
    return ReadValue;
}