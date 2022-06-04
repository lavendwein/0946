#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, sum = 0, maxi = 0;
	File >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		File >> x;
		sum += x;
		maxi = max(maxi, x);
	}
	cout << min(sum / 2, sum - maxi);
	FileOut << min(sum / 2, sum - maxi);
	File.close();
	FileOut.close();
	return 0;
}