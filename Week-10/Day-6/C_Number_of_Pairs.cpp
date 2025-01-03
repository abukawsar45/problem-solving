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
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;

  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < n; i++)
  {

    int up = upper_bound(a.begin(), a.end(), r - a[i]) - a.begin();
    int down = lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();
    
    if (i < up && i >= down)
      down++;

    if (up > down)
    {
      ans += up - down;
    }
  }

  cout << ans / 2 << "\n";
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
