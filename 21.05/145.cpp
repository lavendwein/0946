#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int a, b, s = 0;
	File >> a >> b;
	for (int i = 1; ; i++)
	{
		if (b * i > a)
			break;
		s++;
	}
	cout << s;
	FileOut << s;
	File.close();
	FileOut.close();
	return 0;
}