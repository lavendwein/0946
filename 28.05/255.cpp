#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream File("input.txt");
    ofstream FileOut("output.txt");
    int n, i = 1;
    File >> n;
    for (int j = 2; i <= sqrt(n); ++j)
    {
        if (n % j == 0)
        {
            for (i <= sqrt(n); ++i; )
            {
                if (n % i == 0)
                {
                    break;
                }
            }
            cout << n / i << ' ' << n - (n / i);
            FileOut << n / i << ' ' << n - (n / i);
            return 0;
        }
    }
    cout << 1 << ' ' << n - 1;
    FileOut << 1 << ' ' << n - 1;

    File.close();
    FileOut.close();
    return 0;
}