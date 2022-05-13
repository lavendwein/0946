#include <iostream>
#include <fstream>

using namespace std;

int F(int n)
{
	if (n < 0)
		return 0;
	if (n == 0)
		return 1;
	return n * F(n - 1);
}

int Ch(int n, int k)
{
	return F(n) / (F(k) * F(n - k));
}

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, m;
	File >> n >> m;
	int answer = 0;
	for (int i = m; i < n + 1; i++)
	{
		answer = answer + Ch(n, i);
	}
	cout << answer;
	FileOut << answer;
	File.close();
	FileOut.close();
	return 0;
}