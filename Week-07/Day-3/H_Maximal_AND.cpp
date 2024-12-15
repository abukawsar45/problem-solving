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
const int B = 30;

void solve()
{
  int n, kk;
  cin >> n >> kk;
  vector<int> a(n);

  for (int &x : a)
  {
    cin >> x;
  }
  vector<int> bits(B + 1);
  for (int i = 0; i < n; i++)
  {
    for (int k = B; k >= 0; k--)
    {
      if ((a[i] >> k) & 1)
      {
        bits[k]++;
      }
    }
  }
  int ans = 0;

  for (int k = B; k >= 0; k--)
  {
    if (bits[k] == n)
    {
      ans += (1LL << k);
    }
    else
    {

      int need = n - bits[k];
      if (kk >= need)
      {
        ans += (1LL << k);
        kk -= need;
      }
    }
  }
  cout << ans << endl;
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