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

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  map<int, vector<int>> mp;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 11; j++)
    {
      if (a[i] % allPrimes[j] == 0)
      {
        mp[allPrimes[j]].push_back(i);
        break;
      }
    }
  }

  vector<int> ans(n);
  int color = 1;
  for (auto [x, y] : mp)
  {
    for (auto pos : y)
    {
      ans[pos] = color;
    }
    color++;
  }

  cout << mp.size() << '\n';
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << '\n';
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