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
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  auto ok = [&](int time)
  {
    int cnt = 1, l = 0;
    for (int r = 0; r < n; r++)
    {
      if ((a[r] - a[l]) > 2 * time)
      {
        l = r;
        cnt++;
      }
    }
    return cnt <= 3;
  };

  int l = 0, r = 1e9, mid, ans;
  while (l <= r)
  {
    mid = l + (r - l) / 2;
    if (ok(mid))
    {
      ans = mid;
      r = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }

  cout << ans << '\n';
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