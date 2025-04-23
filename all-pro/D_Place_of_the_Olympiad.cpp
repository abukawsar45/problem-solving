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
  ll n, m, k;
  cin >> n >> m >> k;
  ll low = 1, high = m;
  while (low < high)
  {
    ll mid = (low + high) / 2;
    if (n * (mid * (m / (mid + 1)) + m % (mid + 1)) >= k)
    {
      high = mid;
    }
    else
    {
      low = mid + 1;
    }
  }
  cout << low << '\n';
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