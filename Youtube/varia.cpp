#include<iostream>
using namespace std;

int main()
{
	float variable = 5.6f;  // type int has 4 bytes
	double var = 2.5;
	cout << variable << endl;
	//variable = 20;
	//cout << variable << endl;

	cout << sizeof(double) << endl;
	
	int a;
	int* star;  //define a pointer
	int& moon = a;  // define a reference
	cin.get();
	return 0;

}