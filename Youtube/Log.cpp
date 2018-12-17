#include "Log.h"

#include<iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
	//line 7.if step into mode, it will step into ostream
	// the right way is using step over to neglect subfunc but still execute it
	// or step out to execute the remaining code and return to the called body.
}