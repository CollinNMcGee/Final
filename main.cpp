/**
* @file main.cpp
* @brief prompts for file name, calls the other 2 functions.
* @Author Collin McGee
*
*/

#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <stdarg.h>
#include <string>
#include <fstream>
#include <iostream>
#include "countLine.h"
#include "countChar.h"

int main() {
	std::string pName;
	std::cout << "Please enter the name of your file: ";
	std::cin >> pName;
	countLine(pName);
	countChar(pName);

}