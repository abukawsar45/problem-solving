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
  string a, b;
  cin >> a >> b;

  int f1 = 0, f2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (i % 2)
    {
      if (a[i] == '1')
        f2--;
      if (b[i] == '0')
        f1++;
    }
    else
    {
      if (a[i] == '1')
        f1--;
      if (b[i] == '0')
        f2++;
    }
  } // n

  if (f1 >= 0 && f2 >= 0)
    cout << "YES\n";
  else
    cout << "NO\n";
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