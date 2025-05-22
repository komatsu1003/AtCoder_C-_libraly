#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    // ここにプログラムを追記
    int i = 0;
    cout << "A:";
    while (i < A && !(A == 0))
    {
        /* code */
        cout << "]";
        i++;
    }
    cout << endl;
    i = 0;
    cout << "B:";
    while (i < B && !(B == 0))
    {
        cout << "]";
        i++;
    }
    cout << endl;
}
