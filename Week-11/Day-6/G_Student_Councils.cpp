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
  int k, n;
  vector<int> a;
  cin >> k >> n;
  a.resize(n);
  for (int &i : a)
    cin >> i;

  auto ok = [&](ll mid, int n, int k, vector<int> &a)
  {
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
      cnt += min(mid, a[i]);
    }
    return cnt >= mid * k;
  };

  ll l = 0, r = 1e12, mid, ans;
  while (l <= r)
  {
    mid = l + (r - l) / 2;
    if (ok(mid, n,k, a))
    {
      ans = mid;
      l = mid + 1;
    }
    else
      r = mid - 1;
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