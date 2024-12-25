#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pr pair<int, int>
#define prl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;
const int mod = 1e9 + 7;

void solve()
{
  ll b, c, d;
  cin >> b >> c >> d;

  ll a = 0;
  bool flag = false;

  for (int i = 0; i <= 62; i++)
  {
    bool cb = b & (1LL << i); // Bit in `b` at position `i`
    bool cc = c & (1LL << i); // Bit in `c` at position `i`
    bool cd = d & (1LL << i); // Bit in `d` at position `i`

    if (cb == 0 && cc == 0 && cd == 0)
      ;
    else if (cb == 0 && cc == 0 && cd == 1)
      a |= 1LL << i;
    else if (cb == 0 && cc == 1 && cd == 0)
      a |= 1LL << i;
    else if (cb == 0 && cc == 1 && cd == 1)
      flag = true;
    else if (cb == 1 && cc == 0 && cd == 0)
      flag = true;
    else if (cb == 1 && cc == 0 && cd == 1)
      a |= 1LL << i;
    else if (cb == 1 && cc == 1 && cd == 0)
      a |= 1LL << i;
    else if (cb == 1 && cc == 1 && cd == 1)
      ;
  }

  if (flag)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << a << endl;
  }
}

int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
