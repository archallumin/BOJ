#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    string a;
    int count = 1;
    getline(cin, a);
    if (a.length() == 1 && a[0] == ' ')
    {
        count = 0;
        cout << count << "\n";
        return 0;
    }
    for (int i = 1; i < a.size() - 1; i++)
    {
        if (a[i] == ' ')
            count++;
    }
    cout << count << "\n";
    return 0;
}