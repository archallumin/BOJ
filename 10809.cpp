#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string a;
    cin >> a;
    for (char x = 'a'; x <= 'z'; x++)
    {
        cout << (int)a.find(x) << " ";
    }
    cout << "\n";
    return 0;
}