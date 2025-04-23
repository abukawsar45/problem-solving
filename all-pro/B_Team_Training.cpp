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
#define zero cout << 0 << endl
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
  sort(v.rbegin(), v.rend());

  int cnt = 0, idx = -1;
  for (int i = 0; i < n; i++)
  {
    if (v[i] * (i - idx) >= k)
    {
      cnt++;
      idx = i;
    }
  }

  cout << cnt << '\n';
  // cout << (0-(-1)) << '\n';
  // if(cnt>1)
  //   cout << cnt + 1 << '\n';
  // else
  //   zero;
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