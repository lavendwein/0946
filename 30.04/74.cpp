#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, m;
	File >> n >> m;
	if (m == 1)
	{
		cout << n;
		FileOut << n;
	}
	else if (m == 2)
	{
		cout << "1";
		FileOut << "1";
	}
	else if (m % 2 == 0)
	{
		int j = 2, chet = 1;
		while (j != m)
		{
			j = j + 2;
			chet++;
		}
		cout << chet;
		FileOut << chet;
	}
	else
	{
		int k = 1, nechet = n;
		while (k != m)
		{
			k = k + 2;
			nechet--;
		}
		cout << nechet;
		FileOut << nechet;
	}
	File.close();
	FileOut.close();
}