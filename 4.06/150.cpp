#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int k = -1;
vector <vector<int>> mas;
vector <bool> visited;
int n, s;

void friends(int v) {
	k++;
	visited[v] = true;
	for (int i = 0; i < n; i++) {
		if (mas[v][i] == 1 and !visited[i])
			friends(i);
	}
}

int main()
{
	ifstream File("input.txt");
	ofstream FileOut("output.txt");
	File >> n >> s;
	mas.resize(n);

	for (int i = 0; i < n; i++) {
		mas[i].resize(n);
		for (int j = 0; j < n; j++) {
			File >> mas[i][j];
		}
	}

	visited.resize(n);
	fill(visited.begin(), visited.end(), false);

	friends(s - 1);
	cout << k << endl;

	FileOut << k;
	File.close();
	FileOut.close();
	return 0;
}