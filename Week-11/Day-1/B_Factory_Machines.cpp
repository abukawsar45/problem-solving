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
  int n, t;
  cin >> n >> t;

  vector<int> a(n);
  for(int &i:a)cin >> i;

  auto ok = [&](ll sec)
  {
    int cnt = 0;
    for (ll i = 0; i < n; i++)
    {
      cnt += (sec / a[i]);
      if(cnt >= t)
      {
        return true;
      }
    }
    return false;
  };

  ll l = 0, r = 1e18, mid,ans;
  while (l <= r)
  {
    mid = (l + r) / 2;
    if (ok(mid))
    {
      ans = mid;
      r = mid - 1;
    }
    else
      l = mid + 1;
  }
  cout << ans << "\n";
}

int32_t main()
{
  fastread();
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}