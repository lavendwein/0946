#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n;
	File >> n;
	const int c = 26;
	string a[c];
	int b = 98;
	a[0] = 'a';
	for (int i = 0; i < c - 1; i++)
	{
		char aa = b;
		a[i + 1] = aa + a[i] + a[i];
		b++;
	}
	string x = a[25];
	cout << x[n - 1];
	FileOut << x[n - 1];
	File.close();
	FileOut.close();
	return 0;
}