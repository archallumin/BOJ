#include <iostream>
using namespace std;

int main(void)
{
    int a, b, count = 0, r = -1;
    cin >> a;
    cin >> b;
    for (int i = 1; i <= 100; i++)
    {
        if (i * i < a)
            continue;
        if (r == -1)
            r = i * i;
        if (i * i > b)
            break;
        count += i * i;
    }
    if (count == 0)
        cout << "-1\n";
    else
        cout << count << "\n"
             << r << "\n";
    return 0;
}