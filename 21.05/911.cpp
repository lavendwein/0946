#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Out(ofstream& FileOut, const vector <long int>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		FileOut << v.at(i) << " ";
	}
	FileOut << endl;
}

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	vector <long int> l;
	vector <long int> r;

	string s;
	long int n, k = 1;
	int t;
	File >> s >> n;
	while (n > 0)
	{
		t = n % 3;
		if (t == 2)
		{
			l.push_back(k);
			n += 3;
		}
		else if (t == 1)
			r.push_back(k);
		n = n / 3;
		k = k * 3;
	}
	if (s == "L")
	{
		FileOut << "L:";
		Out(FileOut, l);
		FileOut << "R:";
		Out(FileOut, r);
	}
	else
	{
		FileOut << "L:";
		Out(FileOut, r);
		FileOut << "R:";
		Out(FileOut, l);
	}
	File.close();
	FileOut.close();
	return 0;
}