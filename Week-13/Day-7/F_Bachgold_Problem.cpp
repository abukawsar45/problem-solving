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
  int ans = n / 2;
  bool ok = false;
  if (n % 2 == 1)
  {
    ok = true;
  }

  cout << ans << "\n";
  if (ok)
  {
    for (int i = 1; i < n / 2; i++)
      cout << 2 << " ";
    cout << 3;
  
  }
  else{
    for (int i = 0; i < n / 2; i++)
      cout << 2 << " ";
  }
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