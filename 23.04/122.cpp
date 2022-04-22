#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, a[1000];
	File >> n;
	for (int i = 0; i < n; i++)
		File >> a[i];
	int count = 1, max = 0;
	for (int i = 0, j = 1; j < n; ++i, ++j)
	{
		while (a[i] < a[j] && j < n)
		{
			++count;
			++i;
			++j;
		}
		if (count > max)
			max = count;
	}
	cout << max;
	FileOut << max;
	File.close();
	FileOut.close();
}