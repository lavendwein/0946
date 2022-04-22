#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int Fact(int n)
{
	if (n < 2)
		return 1;
	return n * Fact(n - 1);
}

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	string word;
	File >> word;
	vector <int> letters;
	sort(word.begin(), word.end());
	//cout << word;
	int n = 1;
	for (int i = 0; i < word.length() - 1; i++)
	{
		if (word[i] == word[i + 1])
		{
			n++;
		}
		else
		{
			letters.push_back(n);
			n = 1;
		}
	}
	int result = Fact(word.length());
	int i = 0;
	while (i < letters.size())
	{
		int x = letters.at(i);
		result = result / Fact(x);
		i++;
	}
	cout << result;
}