#include <iostream>
using namespace std;

int main(void)
{
    int count = 0;
    string a, b, c, d, e, f, g, h; // 체스판 8x8이므로...
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    cin >> h;
    // 무식할 거 같지만... ㅜ
    if (a[0] == 'F')
        count++;
    if (a[2] == 'F')
        count++;
    if (a[4] == 'F')
        count++;
    if (a[6] == 'F')
        count++;
    if (b[1] == 'F')
        count++;
    if (b[3] == 'F')
        count++;
    if (b[5] == 'F')
        count++;
    if (b[7] == 'F')
        count++;
    if (c[0] == 'F')
        count++;
    if (c[2] == 'F')
        count++;
    if (c[4] == 'F')
        count++;
    if (c[6] == 'F')
        count++;
    if (d[1] == 'F')
        count++;
    if (d[3] == 'F')
        count++;
    if (d[5] == 'F')
        count++;
    if (d[7] == 'F')
        count++;
    if (e[0] == 'F')
        count++;
    if (e[2] == 'F')
        count++;
    if (e[4] == 'F')
        count++;
    if (e[6] == 'F')
        count++;
    if (f[1] == 'F')
        count++;
    if (f[3] == 'F')
        count++;
    if (f[5] == 'F')
        count++;
    if (f[7] == 'F')
        count++;
    if (g[0] == 'F')
        count++;
    if (g[2] == 'F')
        count++;
    if (g[4] == 'F')
        count++;
    if (g[6] == 'F')
        count++;
    if (h[1] == 'F')
        count++;
    if (h[3] == 'F')
        count++;
    if (h[5] == 'F')
        count++;
    if (h[7] == 'F')
        count++;
    cout << count << "\n";
}