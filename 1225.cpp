#include <iostream>
using namespace std;

int main(void)
{
    string a, b;
    long long int count = 0;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = 0; j < b.length(); j++)
        {
            count += (a[i] - '0') * (b[j] - '0');
        }
    }
    cout << count << "\n";
    return 0;
}