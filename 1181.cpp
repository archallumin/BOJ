#include <iostream>
#include <algorithm>
using namespace std;

bool dict(string a, string b)
{
    if (a.length() == b.length())
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return a[i] < b[i];
            }
        }
    }
    return a.length() < b.length();
}

/** 코드 해설
 * * a와 b 길이가 같으면? 사전 순으로 비교한다.
 * * 만약 아니라면? 길이가 더 긴 것으로 정렬한다!
*/

int main(void)
{
    int a;
    cin >> a;
    string arr[a] = {
        "",
    };
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + a, dict);
    cout << arr[0] << "\n";
    for (int j = 1; j < a; j++)
    {
        if (arr[j - 1] == arr[j])
            continue;
        cout << arr[j] << "\n";
    }
    return 0;
}