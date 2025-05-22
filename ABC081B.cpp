#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A;
    int cnt = 2000000000;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int min = 0;
        cin >> A;
        while (A % 2 == 0)
        {
            A /= 2;
            min++;
        }
        if (min < cnt)
        {
            min = cnt;
        }
    }
    cout << min << endl;
}
