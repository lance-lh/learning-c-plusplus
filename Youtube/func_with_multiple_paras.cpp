#include <iostream>

using namespace std;

/*
void favarate_num(int x, int y) {
	cout << "The sum of two integers is: " << x + y << endl;
}

int main() {
	favarate_num(10,6);
	system("pause");
	return 0;
}
*/

int addnums(int x, int y) {
	int ans = x + y;
	return ans;
}

int main() {
	//int ans;
	//ans = addnums(6,8);
	//cout << "The answer is: " << ans << endl;
	cout << "The sum of two intergers are: " << addnums(6, 8) << endl;
	system("pause");
	return 0;
}