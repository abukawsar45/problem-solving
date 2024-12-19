#include <bits/stdc++.h>
#define ll long long
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;

void solve()
{
  int n, m;
  cin >> n >> m;

  // If m is greater than n, result is bitwise OR of all numbers up to n
  int l = max(0, n - m);
  int r = n + m;

  int ans = 0;

  for (int i = 31; i >= 0; i--)
  {
    int x = ((1 << i) & l) ? 1 : 0;
    int y = ((1 << i) & r) ? 1 : 0;
    if (x ^ y)
    {
      ans = (1 << i);
      ans |= ans - 1;
      break;
    }
  }
  ans |= l;
  cout<< ans << '\n';
}

int32_t main()
{
  fastread();
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
