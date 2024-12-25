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

ll LCM(ll a, ll b)
{
  return (a / __gcd(a, b)) * b;
}

void solve()
{
  ll n, a, b, p, q;
  cin >> n >> a >> b >> p >> q;
  ll x = (n / a) * p, y = (n / b) * q, overlap = (n / LCM(a, b));
  ll ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

  cout << ans << '\n';
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