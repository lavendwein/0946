#include <iostream>
#include <fstream>

using namespace std;

bool Prost(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int x, max = 0;
	File >> x;
	for (int i = 0; i < x; i++)
	{
		if (Prost(i))
		{
			if ((x - i) < i && Prost(x - i))
				max = i;
		}
	}
	cout << x - max << " " << max;
	FileOut << x - max << " " << max;
	File.close();
	FileOut.close();
	return 0;
}