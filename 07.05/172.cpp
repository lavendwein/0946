#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	string n;
	long k, ost = 0;
	File >> n >> k;
	int j = 0;
	while (j < n.length())
	{
		while (ost < k)
			ost = ost * 10 + n[j++] - '0';
		ost = ost % k;
	}
	cout << ost;
	FileOut << ost;
	File.close();
	FileOut.close();
	return 0;
}