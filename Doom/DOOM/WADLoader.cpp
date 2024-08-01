#include "WADLoader.h"
#include<iostream>
using namespace std;




WADLoader::WADLoader(string sWADFilePath) : m_WADData(NULL), m_sWADFilePath(sWADFilePath) {

}

bool WADLoader::loadWAD() {
	if (!openAndLoad()) {
		return false;
	}
	return true;
}

WADLoader::~WADLoader()
{
}

bool WADLoader::openAndLoad() {
	m_WADFile.open(m_sWADFilePath, ifstream::binary);
	if (!m_WADFile.is_open()) {
		cout << "Error: failed to open WAD file " << m_sWADFilePath << endl;
		return false;
	}

	m_WADFile.seekg(0, m_WADFile.end);
	size_t length = m_WADFile.tellg();

	m_WADData = new uint8_t[length];
	m_WADFile.seekg(ifstream::beg);
	m_WADFile.read((char*)m_WADData, length);
	m_WADFile.close();
	return true;
}

bool WADLoader::readDirectories() 
{
	return false;
}
