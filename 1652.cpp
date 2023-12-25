#include <iostream>
using namespace std;

/**
 * * 이차원 배열을 사용해 보자...
 */

int main(void)
{
    int a;
    int counth = 0;
    int countv = 0;
    cin >> a;
    string arr[a][a];
    char str;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> str;
            if (str == '.')
            {
                arr[i][j] = ".";
            }
            else
            {
                arr[i][j] = "X";
            }
        }
    }
    /**
     * * 방 개수 입력을 받는다.
     */
    for (int k = 0; k < a; k++)
    {
        int cnt = 0;
        int bol = 0;
        for (int l = 0; l < a; l++)
        {
            if (arr[k][l] == ".")
            {
                cnt++;
                if (cnt == 2)
                {
                    if (!bol)
                    {
                        counth++;
                    }
                    bol = 1;
                    cnt = 0;
                }
            }
            else
            {
                cnt = 0;
                bol = 0;
            }
        }
    }
    for (int k = 0; k < a; k++)
    {
        int cnt = 0;
        int bol = 0;
        for (int l = 0; l < a; l++)
        {
            if (arr[l][k] == ".")
            {
                cnt++;
                if (cnt == 2)
                {
                    if (!bol)
                    {
                        countv++;
                    }
                    bol = 1;
                    cnt = 0;
                }
            }
            else
            {
                cnt = 0;
                bol = 0;
            }
            /**
             * 해설:
             * arr[k][l]이 .일 경우 카운트를 더하고, 만약 자리가 2가 될 경우,
             * 가로 카운트를 더한다.
             * 세로일 때도 비슷하다.
             * * 꼭 기억해 두기!!
             */
        }
    }
    cout << counth << " " << countv << "\n";
    return 0;
}