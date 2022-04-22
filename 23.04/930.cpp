#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	string father, mother;
	File >> father >> mother;
	//cout << father << " " << mother << endl;
	vector <char> vec1(size(father));
	vector <char> vec2(size(mother));
	for (int i = 0; i < size(father); ++i)
		vec1.push_back(father[i]);
	for (int i = 0; i < size(mother); ++i)
		vec2.push_back(mother[i]);

	vector <int> count1(128, 0);
	vector <int> count2(128, 0);

	int numf = 0;
	int numm = 0;

	vector <char> ans;
	for (char c : vec1)
		count1[(int)c]++;

	for (char c : vec2)
		count2[(int)c]++;

	for (char c = 'z'; c >= 'a'; c--)
	{
		while (count1[(int)c] > 0 && count2[(int)c] > 0)
		{
			ans.push_back(c);
			while (father[numf] != c)
			{
				count1[(int)father[numf]]--;
				numf++;
			}
			count1[(int)father[numf]]--;
			numf++;
			while (mother[numm] != c)
			{
				count2[(int)mother[numm]]--;
				numm++;
			}
			count2[(int)mother[numm]]--;
			numm++;
		}
	}
	for (auto c : ans)
		FileOut << c;

	File.close();
	FileOut.close();

	return 0;
}