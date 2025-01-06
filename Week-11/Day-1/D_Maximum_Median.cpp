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
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;

  sort(v.begin(), v.end());

  auto ok = [&](int mid)
  {
    int cnt = 0;
    for (int i = (n/2); i < n; i++)
    {
      cnt += (mid > v[i] ? (mid - v[i]) : 0);
    }
    return cnt <= k;
    
  };
  ll l = 0, r = 2e9, mid, ans;
  while (l <= r)
  {
    mid = (l + r) / 2;
    if (ok(mid))
    {
      ans = mid;
      l = mid + 1;
    }
    else
      r = mid - 1;
  }
  cout << ans << '\n';
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