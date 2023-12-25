#include <iostream>
using namespace std;

int main(void)
{
    int a;
    string str;
    int arr[26] = {
        0,
    };
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> str;
        arr[str[0] - 'a'] += 1;
    }
    int pr = 1;
    for (int j = 0; j < 26; j++)
    {
        if (arr[j] >= 5)
        {
            cout << (char)(j + 'a');
            pr = 0;
        }
    }
    if (pr == 1)
        cout << "PREDAJA";
    cout << "\n";
    return 0;
}