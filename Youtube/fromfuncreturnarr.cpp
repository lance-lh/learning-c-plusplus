#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// func to generate and return random numbers
int * getRandom()
{
	static int  r[10];

	// set seed
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		r[i] = rand();
		cout << r[i] << endl;
	}

	return r;
}

int main()
{
	// prepare a pointer
	int *p;

	p = getRandom();
	for (int i = 0; i < 10; i++)
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}

	cin.get();
	return 0;
}