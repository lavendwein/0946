#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n;
	File >> n;
	vector <long long> numbers;
	for (int i = 0; i < n; i++)
	{
		int x;
		File >> x;
		numbers.push_back(x);
	}
	sort(numbers.begin(), numbers.begin() + numbers.size());
	int max = 0;
	long long a = numbers[numbers.size() - 1] * numbers[numbers.size() - 2] * numbers[numbers.size() - 3];
	long long b = numbers[0] * numbers[1] * numbers[numbers.size() - 1];
	if (a > b)
	{
		cout << a;
		FileOut << a;
	}
	else
	{
		cout << b;
		FileOut << b;
	}
	File.close();
	FileOut.close();
}