#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	int n;
	float sum = 100.00;
	vector <float> dollar;
	vector <float> euro;
	File >> n;
	for (int i = 0; i < n; i++)
	{
		float x, y;
		File >> x >> y;
		cout << x << " " << y << endl;
		dollar.push_back(x);
		euro.push_back(y);
	}
	for (int j = 0; j < n - 1; j++)
	{
		if (sum / dollar.at(j) * dollar.at(j + 1) > sum / euro.at(j) * euro.at(j + 1))
			sum = sum / dollar.at(j) * dollar.at(j + 1);
		else
			sum = sum / euro.at(j) * euro.at(j + 1);
		j++;
	}
	cout << sum;
	FileOut << sum;
	File.close();
	FileOut.close();
	return 0;
}