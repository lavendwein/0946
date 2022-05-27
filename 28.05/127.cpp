#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n, i, j, k, f, s;
	queue <int> q;
	File >> n;
	int** a = new int* [n];
	int* d = new int[n];
	for (i = 0; i < n; i++)
	{
		d[i] = 1000000000;
		a[i] = new int[n];
		for (j = 0; j < n; j++)
			File >> a[i][j];
	}
	File >> s >> f;
	s--;
	f--;
	d[s] = 0;
	q.push(s);
	while (!q.empty())
	{
		i = q.front();
		q.pop();
		for (j = 0; j < n; j++)
		{
			if (a[i][j] && d[j] > d[i] + 1)
			{
				d[j] = d[i] + 1;
				q.push(j);
			}
		}
	}
	if (d[f] < 1000000000)
	{
		cout << d[f] << endl;
		FileOut << d[f] << endl;
	}
	else
	{
		cout << -1 << endl;
		FileOut << -1 << endl;
	}
	File.close();
	FileOut.close();
	return 0;
}