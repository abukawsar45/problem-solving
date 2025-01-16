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
  vector<int> v(n);
  for (int &i : v)
    cin >> i;

  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    for (int j = 2; j * j <= v[i]; j++)
    {
      while (v[i] % j == 0)
      {
        mp[j]++;
        v[i] /= j;
      }
    }
    if (v[i] > 1)
      mp[v[i]]++;
  }
  bool flag = true;
  for (auto [x, y] : mp)
  {
    if (y % n != 0)
    {
      flag = false;
      break;
    }
  }
  flag ? yes : no;
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