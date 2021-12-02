#include <string>
#include <fstream>
#include <iostream>


void countLine(std::string pName) {
	std::string temp;
	int lines = 0;
	std::ifstream file;
	file.open(pName);
	if (file.is_open()) {
		while (getline(file, temp)) {
			lines++;
		}
		file.close();
	}
	else {
		lines = 1;
	}
	std::cout << lines << "Lines" << std::endl;
}