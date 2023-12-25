#include <iostream>
using namespace std;

int main(void)
{
    int N, m, M, T, R;
    int count = 0;
    cin >> N >> m >> M >> T >> R;
    int im = m;
    while (N > 0)
    {
        if (im + T > M)
        {
            count = -1;
            break;
        }
        if (m + T <= M)
        {
            m += T;
            count++;
            N--;
        }
        else
        {
            m -= R;
            if (m < im)
                m = im;
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}