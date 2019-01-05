// simply to say, macro is just to find/replace

#include<iostream>
#include<string>

// it is not suggested to use preprocessor this way, because if the following one code is in other file, it may be confusing to know what it exactly means
#define WAIT std::cin.get()

#define LOG(x) std::cout << x << std::endl;

int main()
{
	LOG("hello");
	WAIT;
}

/*
// backslash then enter straightly
#define MAIN int main() \
{\
std::cin.get(); \
}

MAIN
*/
