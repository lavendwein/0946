#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int k;
	File >> k;
	vector <int> a(k + 1, 0);
	a[0] = 1;
	const int mod = 1000000;
	for (int i = 1; i <= k; i++)
	{
		if (i >= 10)
			a[i] += a[i - 10];
		if (i >= 11)
			a[i] += a[i - 11];
		if (i >= 12)
			a[i] += a[i - 12];
		a[i] %= mod;
	}
	int out = a[k] * 2 % mod;
	cout << out;
	FileOut << out;
	File.close();
	FileOut.close();
	return 0;
}