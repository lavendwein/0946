#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");

	int b;
	File >> b;
	if (b == 1 || b == 2 || b == 3 || b == 6)
	{
		cout << "-1";
		FileOut << "-1";
		return 0;
	}
	if (b == 4)
	{
		cout << 2 << endl << 1 << endl << 0 << endl << 1;
		FileOut << 2 << endl << 1 << endl << 0 << endl << 1;
		return 0;
	}
	if (b == 5)
	{
		cout << 1 << endl << 2 << endl << 0 << endl << 0 << endl << 2;
		FileOut << 1 << endl << 2 << endl << 0 << endl << 0 << endl << 2;
		return 0;
	}
	else
	{
		cout << 2 << endl << 1 << endl;
		FileOut << 2 << endl << 1 << endl;
		for (int i = 0; i < b - 7; i++)
		{
			cout << 0 << endl;
			FileOut << 0 << endl;
		}
		cout << 1 << endl << 0 << endl << 0 << endl << 0 << endl << b - 4 << endl;
		FileOut << 1 << endl << 0 << endl << 0 << endl << 0 << endl << b - 4 << endl;
		return 0;
	}
	File.close();
	FileOut.close();
	return 0;
}