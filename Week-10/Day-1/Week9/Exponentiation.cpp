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

int pw(int x, int n)
{
  int ans = 1 % mod;
  while (n)
  {
    if (n & 1)
      ans = (1LL * ans % mod * x % mod) % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}

void solve()
{
  int x, n;
  cin >> x >> n;
  cout << pw(x, n) << '\n';
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