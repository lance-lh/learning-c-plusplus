// treat this memory I have as a different type than it actually is.
// all we need to do is just get that type as a pointer and cast it to a different pointer and then we can dereference it if we need to 
#include<iostream>

struct Entity
{
	int x, y;
};

int main()
{
	/*int a = 50;  // &a, 32 00 00 00
	//double value = a;  // &value, it is an implicit conversion 00 00 00 00 00 00 49 40
	//double value = (double)a; // explicit conversion
	//double value = *(double*)&a; // take the integer pointer, and then convert it into double pointer and finnally dereference it to fetch its value. -9.25596e+61, pretty bad, because we take a 4 bytes integer and convert it into 8 bytes double type data. Here, we can watch memory by enter &a and &value, they are located in the same memory block, but because of type difference, we got crashed results.
	double& value = *(double*)&a;
	value = 0.0;
	std::cout << value << std::endl;*/

	Entity e = { 5, 8 };  // &e, 05 00 00 00 08 00 00 00

	int* position = (int*)&e;// fetch its address and cast is into integer pointer
	std::cout << position[0] << ", " << position[1] << std::endl;

	std::cin.get();
}