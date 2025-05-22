// 問題文
// 次のプログラムをコピー＆ペーストして、指定した場所にプログラムを追記することで問題を解いて下さい。

// Copy
// #include <bits/stdc++.h>
//     using namespace std;

// int main()
// {
//     // 一年の秒数
//     int seconds = 365 * 24 * 60 * 60;

//     // 以下のコメント/* */を消して追記する
//     cout << /* 1年は何秒か */ << endl;
//     cout << /* 2年は何秒か */ << endl;
//     cout << /* 5年は何秒か */ << endl;
//     cout << /* 10年は何秒か */ << endl;
// }
// int型の変数secondsは一年の秒数を表しています。これを利用して

//     1年は何秒か 2年は何秒か 5年は何秒か 10年は何秒か を順に一行ずつ表示するプログラムを作って下さい。
//         うるう秒やうるう年のことは考え無くて良いとします。

//             実行結果（一部を「？？？？？」で隠しています） 31536000 63072000
// ？？？？？
// ？？？？？

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 一年の秒数
    int seconds = 365 * 24 * 60 * 60;

    // 以下のコメント/* */を消して追記する
    cout << seconds << endl;
    cout << seconds * 2 << endl;
    cout << seconds * 5 << endl;
    cout << seconds * 10 << endl;
}