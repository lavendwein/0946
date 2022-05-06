#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n;
	File >> n;
	vector <int> ch;
	vector <int> zn;
	ch.push_back(0);
	ch.push_back(1);
	zn.push_back(1);
	zn.push_back(1);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < ch.size() - 1; j++)
		{
			if (zn[j] + zn[j + 1] <= n)
			{
				ch.insert(ch.begin() + j + 1, ch[j] + ch[j + 1]);
				zn.insert(zn.begin() + j + 1, zn[j] + zn[j + 1]);
				j++;
			}
		}
	}
	for (int i = 1; i < ch.size() - 1; ++i)
		cout << ch[i] << "/" << zn[i] << endl;
	File.close();
	FileOut.close();
	return 0;
}