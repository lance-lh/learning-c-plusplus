#include <iostream>
#include <string>
using namespace std;

int main()
{
	string characterName = "Tom";
	int characterAge = 18;
	cout << "There once was a man named " << characterName << endl;
	cout << "He was " << characterAge << " years old" << endl;

	characterName = "Mike";
	cout << "He liked the name " << characterName << endl;
	cout << "But he did not like being " << characterName << endl;

	system("pause");
	return 0;
}