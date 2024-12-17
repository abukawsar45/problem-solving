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
  vector<int> a(n), res(33, 0);
  for (auto &x : a)
    cin >> x;

  for (int j = 0; j < 32; j++)
  {
    for (int i = 0; i < n; i++)
    {
      if (a[i] & (1 << j))
        res[j]++;
    }
  }

  vector<int> ans;
  for (int i = 1; i <= n; i++)
  {
    bool ok = true;
    for (int j = 0; j < 32; j++)
    {
      if (res[j] % i != 0)
      {
        ok = false;
        break;
      }
    }
    if (ok)
      ans.push_back(i);
  }

  sort(ans.begin(), ans.end());
  for (auto &x : ans)
    cout << x << " ";
  cout << "\n";
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