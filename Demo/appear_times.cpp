#include <iostream>
using namespace std;

int main()
{
	int curri = 0, i = 0;
	if (cin >> curri) {
		int cnt = 1;  // num of currl 
		while (cin >> i)  // input check
		{
			if (curri == i)
				++cnt;
			else {
				cout << curri << " occurs " << cnt << " times" << endl;
				// reset cnt and current curri
				curri = i;
				cnt = 1;
			}
		}
		cout << curri << " occurs " << cnt << " times" << endl;
	}
		
	system("pause");
	return 0;
}