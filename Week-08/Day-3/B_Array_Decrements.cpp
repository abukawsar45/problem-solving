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
  vector<int> v(n), v2(n);
  int mx1 = 0, mx1Index = -1, mx2 = 0, mx2Index = -1;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> v2[i];
  }
  int diff = -1, zero_diff = -1;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (v[i] < v2[i])
    {
      flag = true;
      break;
    }
    if (v2[i] != 0)
    {
      if (diff == -1)
      {
        diff = v[i] - v2[i];
      }
      else
      {
        if (v[i] - v2[i] != diff)
        {
          flag = true;
          break;
        }
      }
    }
    else
    {
      zero_diff = max(zero_diff, v[i] - v2[i]);
    }
  }

  if (flag)
  {
    no;
  }
  else
  {
    (diff == -1 || zero_diff <= diff) ? yes : no;
  }
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