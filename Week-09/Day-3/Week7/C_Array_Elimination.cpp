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

string dToB(int n)
{
  string ans;
  for (int i = 64; i >= 0; i--)
  {

    if ((n >> i) & 1)
      ans += '1';
    else
      ans += '0';
  }
  return ans;
}

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;

  vector<int> m(64);

  int g = 0;
  for (int i = 0; i < n; i++)
  {
    string s = dToB(v[i]);
    for (int k = 0; k < 64; k++)
    {
      if (s[k] != '0')
        m[k]++;
    }
  }
  for (int i = 0; i < 64; i++)
  {
    g = __gcd(g, m[i]);
  }
  for (int i = 1; i <= n; i++)
  {
    if (g % i == 0)
      cout << i << " ";
  }
  cout << endl;
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