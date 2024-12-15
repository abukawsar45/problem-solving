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
  int n;
  cin >> n;
  int a = 1, b = 0, cnt = 0;
  while (a * 2 <= n)
  {
    a *= 2;
    cnt++;
  }
  int ans = 1;
  bool flag = false;
  for (int i = cnt - 1; i >= 0; i--)
  {
    if ((1 << i) & n)
    {
      b |= (1 << i);
      flag = true;
    }

    else
    {
      if (flag)
        ans = ans * 2;
    }
  }
  cout << ans << endl;
}

int32_t main()
{
  fastread();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}