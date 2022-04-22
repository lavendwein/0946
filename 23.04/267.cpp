#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, x, y;
	File >> n >> x >> y;
	int t = 0;
	t += min(x, y);
	int s = max(x, y);
	for (int i = 1; i < n; i++)
	{
		s -= min(x, y);
		if (s <= 0)
		{
			i++;
			s = max(x, y);
		}
		t += min(x, y);
	}
	cout << t;
	FileOut << t;
	File.close();
	FileOut.close();
}