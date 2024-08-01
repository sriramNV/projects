#pragma once
#include <string>
#include <fstream>
#include <vector>
#include<cstdint>
#include "DataTypes.h"

class WADLoader
{
public:
	WADLoader(std::string sWADFilePath);
	bool loadWAD();

	~WADLoader();

protected:
	bool openAndLoad();
	bool readDirectories();

	std::string m_sWADFilePath;
	std::ifstream m_WADFile;
	uint8_t* m_WADData;
	std::vector<Directory> m_WADDirectories;
};

