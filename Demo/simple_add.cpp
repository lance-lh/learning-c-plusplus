#include <iostream>
using namespace std;

int main()
{
	int sum = 0, i = 0;
	/*
	while (i < 11) {
		sum += i;
		i++;
	}
	*/

	for (i; i < 11; ++i)
		sum += i;

	cout << sum << endl;
	system("pause");
	return 0;

}