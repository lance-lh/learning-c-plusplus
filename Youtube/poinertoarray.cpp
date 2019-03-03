#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	char  var[MAX] = { 'a', 'b', 'c' };
	char  *ptr;

	// point to the first address of array
	ptr = var;

	for (int i = 0; i < MAX; i++)
	{

		cout << "Address of var[" << i << "] = ";
		cout << (int *)ptr << endl;  // force convert char * to int *

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// move pointer to the next location
		ptr++;
	}
	cin.get();
	return 0;
}