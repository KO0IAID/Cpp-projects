#include <iostream>
#include "log.h"

/*
	Including log.h makes it explicit to the compiler that this/or one of the files that also use "log.h"
	contains the implementation of what is delcared in log.h
*/


void log()
{
	std::cout << "I am declared in log.h!" << std::endl;
	std::cout << "I am defined in log.cpp!" << std::endl;
	std::cout << "I am called in the main!" << std::endl;
}
