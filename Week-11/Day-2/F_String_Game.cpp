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
  string t, p;
  cin >> t >> p;
  int n = t.size(), m = p.size();

  vector<int> a(n);
  for (int &i : a)
  {
    cin >> i;
    
  }

  auto ok = [&](int len)
  {
    vector<bool> bad(n);
    for (int i = 0; i <= len; i++)
    {
      int x = a[i] - 1;
      bad[x] = true;
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
      if (!bad[i] && t[i] == p[j])
        j++;

      if (j == m)
        return true;
    }
    return false;
  };

  ll l = 0,
     r = n - 1, ans = 0, mid;
  while (l <= r)
  {
    mid = l + (r - l) / 2;
    if (ok(mid))
    {
      ans = mid + 1;
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
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