#include <iostream>
using namespace std;

void msg();  // declare before use

int main()
{
	extern char a;
	cout << a << endl;
	//void msg();
	msg();  // use without return type
	system("pause");
	return 0;
}