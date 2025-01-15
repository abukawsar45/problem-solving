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
auto ok(ll mid)
{
  ll sum = 1LL * mid * (mid + 1) / 2;

  return (sum - mid);
}

void solve()
{
  ll n;
  cin >> n;

  ll l = 0, r = 1e10, mid, ans = LLONG_MAX;
  while (l <= r)
  {
    mid = l + (r - l) / 2;
    ll res = ok(mid);
    if (res < n)
    {
      ll cur = n - res;
      ans = min(mid+cur, ans);
      l = mid + 1;
    }

    else
      r = mid - 1;

    if (res == n)
    {
      // cout << res << " - " << mid << endl;
      ans = min(mid, ans);
      break;
    }
  }
  cout <<  ans << '\n';
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