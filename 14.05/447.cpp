#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	long long n, f = 1;
	File >> n;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
		while (f % 10 == 0)
			f /= 10;
		f = f % 1000000;
	}
	cout << f % 10;
	FileOut << f % 10;
	File.close();
	FileOut.close();
	return 0;
}