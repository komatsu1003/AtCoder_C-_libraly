#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // ここにプログラムを追記
    int sum = 1;
    for (int i = 0; i < S.size(); i++)
    {
        char temp = S.at(i);
        if (temp == '+')
        {
            sum++;
        }
        else if (temp == '-')
        {
            sum--;
        }
    }
    cout << sum << endl;
}
