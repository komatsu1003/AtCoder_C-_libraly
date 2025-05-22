#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    int temp, cnt = 0;
    int TenThousand, thousand, ten, one;
    cin >> A >> B;
    for (int i = A; i <= B; i++)
    {
        temp = i;
        TenThousand = (temp / 10000) % 10;
        thousand = (temp / 1000) % 10;
        ten = (temp / 10) % 10;
        one = temp % 10;
        if (TenThousand == one && thousand == ten)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
