#include <iostream>
using namespace std;
#include "log.h"

void InitLog()
{
	Log("Initialized Log");
}

void Log(const char* msg)
{
	std::cout << msg << std::endl;
}