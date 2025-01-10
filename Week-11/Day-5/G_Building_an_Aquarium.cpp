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

bool ok(ll h, int x, vector<ll> &a)
{
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] >= h)
      continue;
    ll d = h - a[i];
    x -= d;
  }
  return x >= 0;
}

void solve()
{
  int n, k;
  cin >> n >> k;

  vector<ll> a(n);
  for (ll &x : a)
    cin >> x;

  ll l = 0, h = 1e10;
  ll ans = 0;
  while (l <= h)
  {
    ll mid = l + (h - l) / 2;
    if (ok(mid, k, a))
    {
      ans = max(ans, mid);
      l = mid + 1;
    }

    else
      h = mid - 1;
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