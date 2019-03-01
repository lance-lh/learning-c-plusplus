// implement KMP substring search algorithm
#include<iostream>

int KMPsearch(char *t, char *p)
{
	int tLen = strlen(t);
	int pLen = strlen(p);

	int i = 0, j = 0;

	while (i < tLen && j < pLen)
	{
		if (t[i] == p[j])
		{
			i++;
			j++;
		}
		else
		{
			j = next(j);
		}
	}
	return i - j;
}

int next(char *p)
{
	int pLen = strlen(p);
	int *array = new int[pLen];

	int t = array[0] = -1;


}


int main()
{
	std::cin.get();
}