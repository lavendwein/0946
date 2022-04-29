#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void Find(string src, string sub, ofstream& FileOut)
{
    int start = 0;
    int pos = 0;
    for (;;) {
        pos = src.find(sub.c_str(), start);
        if (pos != -1) {
            start = pos + 1;
            cout << pos << " ";
            FileOut << pos << " ";
        }
        else {
            break;
        }
    }
}

int main()
{
    ifstream File("input.txt");
    ofstream FileOut("output.txt");
    string s, t;
    File >> s >> t;
    Find(s, t, FileOut);
    File.close();
    FileOut.close();
}