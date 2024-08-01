#pragma once

#include<cstdint>

struct Header {
	char WADType[5];
	uint32_t directoryCount;
	uint32_t directoryOffset;
};

struct Directory {
	uint32_t lumpOffset;
	uint32_t lumpSize;
	char lumpName[9];
};

