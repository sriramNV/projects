#pragma once
#include<cstdint>

class WADReader
{
public:
	uint16_t read2Bytes(const uint8_t *pWADData, int offset){}
	uint32_t read4Bytes(const uint8_t* pWADData, int offset);
};

