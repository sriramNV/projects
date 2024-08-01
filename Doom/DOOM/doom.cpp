#include<iostream>
#include "WADLoader.h"

int main() {
	WADLoader wadLoader("./Assets/DOOM.WAD");
	bool asd = wadLoader.loadWAD();
	std::cout << asd;
	return 0;
}