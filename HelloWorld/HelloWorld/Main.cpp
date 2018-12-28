// static linking means library actually gets basically put into your excutable so it's just inside your .exe file or whatever your executable is for your operating system.
// a dynamic library gets linked at runtime so you still do have some kind of linkage you can choose to load a dynamic library. literally, there is a function called load library which you can use in the Windows API as an example and that will load you like your dynamic library and you can pull function pointers out of that. 

// glfw3.dll is the runtime kind of dynamic link library that we actually use if we are linking dynamically at runtime
// glfw3dll.lib is actually kind of the static library that we use with the dll. This file actually contains all of the locations of the functions and symbols inside glfw3.dll so that we can link against them at compile time 
// glfw3.lib is the static library, we do not need glfw3.dll file to be without exe file at runtime 

// you should put your dll file into the same folder as your executable
#include<iostream>
#include <GLFW/glfw3.h>  

// extern "C" int glfwInit();

int main()
{
	int a = glfwInit();
	std::cout << a << std::endl;
	std::cin.get();
}