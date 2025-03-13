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
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  vector<int>  d(n + 1);
  for (int i = 0; i < q; i++)
  {
    int l, r;
    cin >> l >> r;
    l--, r--;
    d[l] += 1;
    d[r + 1] -= 1;
  }
  for (int i = 1; i <= n; i++)
  {
    d[i] = d[i - 1] + d[i];
  }


  sort(d.begin(), d.end(), greater<int>());
  sort(v.begin(), v.end(), greater<int>());
  // for (int i = 0; i < n; i++)
  // {
  //   cout << i << " -> " << prefV[i] << '\n';
  // }
  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += v[i] * d[i] * 1LL;
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