#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t, a;
    string b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        for (int i = 0; i < b.length(); i++)
        {
            for (int k = 0; k < a; k++)
            {
                cout << b[i];
            }
        }
        cout << "\n";
    }
    return 0;
}