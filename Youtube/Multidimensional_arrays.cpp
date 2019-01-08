// storing an image in a one-dimentional way is optimal

#include<iostream>

int main()
{
	int* array = new int[50];  // heap allocation, it doesn't matter with this integer, what we've done here is allocating 200 bytes of memory. we could then proceed to use this integer to store floats

	int** a2d = new int*[50];// anchor2, a buffer of pointer objects, a pointer to a collection of pointers. we got a pointer to an integer pointer. here, also allocate 200 bytes of memory. we have room to store 200 bytes worth of pointers so 50 pointers, we can go through and set each of those pointers to point to an array and that way we actually end up with is 50 arrays

	for (int i = 0; i < 50; i++)
		a2d[i] = new int[50]; // anchor1, we essentially allocated 50 arrays and the location of each one of those arrays is stored in this a2d array

	a2d[0][0] = 0;
	a2d[0][1] = 0;
	a2d[0][2] = 0;

	for (int i = 0; i < 50; i++)
		delete[] a2d[i];  // release anchor1 memory 
	delete[] a2d; // release anchor2 memory

	int*** a3d = new int**[50];
	for (int i = 0; i < 50; i++)
	{
		a3d[i] = new int*[50];
		for (int j = 0; j < 50; j++)
		{
			int** ptr = a3d[i];
			ptr[j] = new int[50];
		}	
	}

	std::cin.get();
}