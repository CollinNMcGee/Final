g++ -g -wall -o count  countLine.h countChar.h main.cpp
docs:
	doxygen ./Doxyfile
cppcheck.out.xml: main.cpp countLine.h countChar.h
	cppcheck -q --error-exitcode=1 countLine.h countChar.h main.cpp
valgrind:
	valgrind countLine.h countChar.h main.cpp