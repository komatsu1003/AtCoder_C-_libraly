#if !__INCLUDE_LEVEL__
#include __FILE__

int main()
{
  int N;
  cin >> N;
  vector<string> S(N, string(N, '#'));
  rep(i, 0, N)
  {
    rep(j, 0, N)
    {
      int layer = min({i, j, N - i - 1, N - j - 1});
      if (layer % 2 == 0)
      {
        S[i][j] = '#';
      }
      else
      {
        S[i][j] = '.';
      }
    }
  }
  for (const auto &c : S)
  {
    cout << c << el;
  }
}
#else
#include <bits/stdc++.h>
using namespace std;
struct Init
{
  Init()
  {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(13);
  }
} init;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define rep(i, x, limit) for (ll i = (ll)x; i < (ll)limit; i++)
#define REP(i, x, limit) for (ll i = (ll)x; i <= (ll)limit; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
#define spa " "
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
#define eps (1e-10)
#define Equals(a, b) (fabs((a) - (b)) < eps)
#define debug(x) cerr << #x << " = " << x << el

const int di[] = {-1, 0, 1, 0}; // x方向 上左下右
const int dj[] = {0, -1, 0, 1}; // y方向
const double pi = 3.141592653589793238;
const int inf = 1073741823;
const ll infl = 1LL << 60;
const string ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string abc = "abcdefghijklmnopqrstuvwxyz";

template <typename T1, typename T2>
std::ostream &operator<<(std::ostream &os, std::pair<T1, T2> p)
{
  os << "{" << p.first << "," << p.second << "}";
  return os;
}

// 配列の要素を空白区切りで出力 第二引数をtrueにすると改行区切り
template <typename T>
inline void print_vec(const vector<T> &v, bool split_line = false)
{
  if (v.empty())
  {
    cout << "This vector is empty." << el;
    return;
  }
  constexpr bool isValue = is_integral<T>::value;
  for (int i = 0; i < (int)v.size(); i++)
  {
    if constexpr (isValue)
    {
      if ((v[i] == inf) || (v[i] == infl))
        cout << 'x' << " \n"[split_line || i + 1 == (int)v.size()];
      else
        cout << v[i] << " \n"[split_line || i + 1 == (int)v.size()];
    }
    else
      cout << v[i] << " \n"[split_line || i + 1 == (int)v.size()];
  }
}

template <typename T1, typename T2>
inline void print_vec(const vector<pair<T1, T2>> &v, bool split_line = false)
{
  if (v.empty())
  {
    cout << "This vector is empty." << el;
    return;
  }
  for (int i = 0; i < (int)v.size(); i++)
  {
    cout << '{';
    auto [a, b] = v[i];
    constexpr pair<bool, bool> isValue = {is_integral<T1>::value, is_integral<T2>::value};
    if constexpr (isValue.first)
    {
      if (a == inf || a == infl)
        cout << "x,";
      else
        cout << a << ",";
    }
    else
      cout << a << ",";
    if constexpr (isValue.second)
    {
      if (b == inf || b == infl)
        cout << "x,";
      else
        cout << b;
    }
    else
      cout << b;
    cout << "}" << " \n"[split_line || i + 1 == (int)v.size()];
  }
}

template <typename T1, typename T2>
inline bool chmax(T1 &a, T2 b)
{
  bool compare = a < b;
  if (compare)
    a = b;
  return compare;
}
template <typename T1, typename T2>
inline bool chmin(T1 &a, T2 b)
{
  bool compare = a > b;
  if (compare)
    a = b;
  return compare;
}

// 文字列中の特定文字の数をカウント
template <typename T>
int countChar(const T &str, char target)
{
  int count = 0;
  for (size_t i = 0; i < str.size(); i++)
  {
    if (str[i] == target)
    {
      count++;
    }
  }
  return count;
}

// 文字の種類を判定
template <typename T>
string checkChar(T c)
{
  if (isalpha(c))
  {
    if (islower(c))
    {
      return "small";
    }
    else
    {
      return "large";
    }
  }
  else if (isdigit(c))
  {
    return "number";
  }
  else
  {
    return "other";
  }
}

// int n = 3;

// // {0, 1, ..., n-1} の部分集合の全探索
// for (int bit = 0; bit < (1 << n); ++bit)
// {
//   vector<int> S;
//   for (int i = 0; i < n; ++i)
//   {
//     if (bit & (1 << i))
//     { // 列挙に i が含まれるか
//       S.push_back(i);
//     }
//   }

//   cout << bit << ": {";
//   for (int i = 0; i < (int)S.size(); ++i)
//   {
//     cout << S[i] << " ";
//   }
//   cout << "}" << endl;
// }
// 文字列を数値に変換
template <typename T, typename U>
U strToNum(const T &str)
{
  istringstream ss(str);
  U num;
  ss >> num;
  return num;
}

// 小文字を大文字に変換
template <typename T>
T toUpper(T c)
{
  if (islower(c))
  {
    return c - 32;
  }
  else
  {
    return c;
  }
}

// 大文字を小文字に変換
template <typename T>
T toLower(T c)
{
  if (isupper(c))
  {
    return c + 32;
  }
  else
  {
    return c;
  }
}

// 文字列を大文字に変換
template <typename T>
T toUpperStr(T str)
{
  transform(str.begin(), str.end(), str.begin(), ::toupper);
  return str;
}

// 文字列を小文字に変換
template <typename T>
T toLowerStr(T str)
{
  transform(str.begin(), str.end(), str.begin(), ::tolower);
  return str;
}

// std::chronoを利用した時間計測用クラス
class Timer
{
  chrono::system_clock::time_point start;

public:
  Timer() : start(chrono::system_clock::now()) {}

  double count()
  {
    chrono::duration<double> Time_ = chrono::system_clock::now() - start;
    return Time_.count();
  }

  bool is_under(double x)
  {
    return (this->count()) < x;
  }
};

#endif