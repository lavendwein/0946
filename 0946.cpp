#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

int main()
{
    ifstream file;
    string line;
    ofstream out;

    out.open("output.txt");
    file.open("input.txt");

    if (!file)
    {
        cout << "error opening file" << endl;
        return 0;
    }
    
    int n; //number of operations
    file >> n;

    stack<int> left;
    stack<int> right;

    int i = 0;
    int operations[10^6];

    while (!file.eof())
    {
        file >> operations[i];
        i++;
    }
    
    int j = 0;

    while (j < i)
    {
        if (operations[j] == 1)
        {
            left.push(operations[j + 1]);
            j++;
        }
        else if (operations[j] == 2)
        {
            right.push(operations[j + 1]);
            j++;
        }
        else if (operations[j] == 3)
        {
            cout << left.top() << " " << endl;
            left.pop();
        }
        else
        {
            cout << right.top() << " " << endl;
            right.pop();
        }
        j++;
    }

    out.close();
    file.close();

    return 0;
}