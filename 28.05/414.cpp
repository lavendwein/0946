#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, a, b, k;
	File >> n >> a >> b;
	vector <int> v, v1, v2;
	v.push_back(1);
	v.push_back(1);

	for (int i = 1; i < n; i++)
	{
		File >> k;
		v.push_back(k);
	}

	int x = a;
	int y = b;
	v1.push_back(x);
	v2.push_back(y);

	while (x != 1)
	{
		x = v[x];
		v1.push_back(x);
	}

	while (y != 1)
	{
		y = v[y];
		v2.push_back(y);
	}

	x = a;
	y = b;

	while (x != y)
	{
		if (v2.size() > v1.size())
			v2.erase(v2.begin());
		else
			v1.erase(v1.begin());
		x = v1[0];
		y = v2[0];
	}
	cout << x;
	FileOut << x;
	File.close();
	FileOut.close();
	return 0;
}