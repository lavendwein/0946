#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	long long n, a;
	File >> n;
	a = n / 3;
	n = n % 3;
	if (n == 1)
	{
		a -= 1;
		n += 3;
	}
	if (n > 1)
		cout << 2 << ' ' << n / 2 << ' ';
	if (a > 0)
		cout << 3 << ' ' << a;
	File.close();
	FileOut.close();
	return 0;
}