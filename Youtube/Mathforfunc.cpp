#include <iostream>
using namespace std;

int Multiply(int a, int b)
{
	return a * b;
}

void callMul(int a, int b)
{
	int result1 = Multiply(a, b);
	cout << result1 << endl;
}

int main()
{
	/*
	int result1 = Multiply(5, 8);
	cout << result1 << endl;

	int result2 = Multiply(6, 8);
	cout << result2 << endl;

	int result3 = Multiply(8, 8);
	cout << result3 << endl;
	*/

	callMul(5, 8);
	callMul(6, 8);
	callMul(8, 8);

	cout << "Computation Complete!" << endl;
	system("pause");
	return 0;
}