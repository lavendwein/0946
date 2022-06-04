#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, number, a = 3, b = 1;
	File >> n;
	if (n % 2 != 0)
	{
		cout << 0;
		FileOut << 0;
	}
	else
	{
		for (int i = 1; i < n / 2; i++)
		{
			int number = a;
			a = 4 * a - b;
			b = number;
		}
		cout << a;
		FileOut << a;
	}
	File.close();
	FileOut.close();
	return 0;
}