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
  for (int &x : v)
    cin >> x;
  bool flag = false;
  // for (int x : v)cout<< x<<" ";
  for (int i = 0; i < (1 << n); i++)
  {
    ll sum = 0;
    for (int k = 0; k < n; k++)
    {
      if ((i >> k) & 1)
        sum += v[k];
      else
        sum -= v[k];
      // cout << v[k] << " ";
    }

    if (sum % 360 == 0)
    {

      flag = true;

      break;
    }
  }

  if (flag)
    yes;
  else
    no;
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