// implement Brute-Force algorithm
#include<iostream>

// passing two arguments, one is text, the other is pattern
// using pointer to access their memory location
int ViolentMatch(char *t, char *p)
{
	// string has limited length
	int tLen = strlen(t);
	int pLen = strlen(p);

	// two 
	int i = 0, j = 0;

	while (i < tLen && j < pLen)
	{
		// for two strings, char by char check their state
		// if they are equal, cout plus
		if (t[i] == p[j])
		{
			i++;
			j++;
		}
		// two char data are not equal
		// move text string count to the latter one
		// move pattern string count to its start
		// note: string is 0-indexed
		else
		{
			i = i - j + 1; 
			j = 0;
		}
	}
	
	if (j == pLen)
		return i - j;
	else
		return -1;

}

int main()
{
	char *text = "BBCABCDABABCDABCDABDE";
	char *pattern = "ABCDABD";

	int index = ViolentMatch(text, pattern);

	std::cout << "The matched index is: " << index << std::endl;

	std::cin.get();
}