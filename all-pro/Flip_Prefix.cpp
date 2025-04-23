#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int power(int a, int b)
{
  int res = 1;
  while (b)
  {
    if (b & 1)
      res = res * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return res;
}

void solve()
{
  int n;
  string s;
  cin >> n >> s;

  int bal = 0, count = 0;
  for (int i = 0; i < n; ++i)
  {
    if (s[i] == '1')
      bal++;
    else
      bal--;

    if (bal == 0)
      count++;
  }

  cout << power(2, count) << '\n';
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
