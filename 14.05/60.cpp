#include <iostream>
#include <fstream>

using namespace std;

bool Simple(int x)
{
	int c = 0;
	if (x == 1 || x == 0)
		return false;
	for (int i = 1; i < (x / 2 + 1); i++)
	{
		if (x % i == 0)
			c++;
		if (c > 1)
			return false;
	}
	return true;
}

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int k;
	File >> k;
	int i1 = 0, i2 = 0;
	for (int i = 1; ; i++)
	{
		if (Simple(i))
		{
			i1++;
			if (Simple(i1))
			{
				i2++;
				if (i2 == k)
				{
					cout << i;
					FileOut << i;
					return 0;
				}
			}
		}
	}
	File.close();
	FileOut.close();
	return 0;
}