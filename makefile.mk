all: main docs cppcheck valgrind

main:
	g++ -g -Wall -o count  countLine.h countChar.h main.cpp

docs:
	doxygen ./Doxyfile

cppcheck:
	cppcheck --file-list=checktest.txt

valgrind:
	valgrind --leak-check=yes ./count