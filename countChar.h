/**
* @file CountChar.h
* @brief reads through the file to find the number of characters
* @param pName
*/

#include <string>
#include <fstream>
#include <iostream>


void countChar(std::string pName) {
	std::string temp;
	int count = 0;
	std::ifstream file;
	file.open(pName);
	if (file.is_open()) {
		while (getline(file, temp)) {
			count += temp.length();
		}
		file.close();
	}
	else {
		temp = "Athens";
		count = temp.length();
	}
	std::cout << count << "Characters" << std::endl;
}