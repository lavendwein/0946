#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n;
	File >> n;
	long long power = pow(3, n / 3);
	if (n % 3 == 1)
		power = power * 4 / 3;
	if (n % 3 == 2)
		power = power * 2;
	cout << power;
	FileOut << power;
	File.close();
	FileOut.close();
	return 0;
}