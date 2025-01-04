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
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;

  ll start = 0, end = -1;

  ll sum = 0, cnt = 0;

  while (end < n)
  {
    while (end < n && sum < x)
    {
      end++;
      sum += v[end];
    }

    while (start <= end && sum > x)
    {
      sum -= v[start];
      start++;
    }
    if (sum == x)
    {
      cnt++;
      sum -=v[start];
      start++;
    }
  }
  cout << cnt << endl;
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