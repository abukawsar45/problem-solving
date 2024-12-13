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
  string s;
  cin >> s;
  ll l= s.size();
  int ans = 0;
  for (int i = 0; i < l; i++)
  {
    if(s[i]=='7')
      ans += pow(2, (l - i-1));
  }

  ll sum = 0;
  for (int i = 0; i <l; i++)
  {
    sum += pow(2, i);
  }
  // cout << ans << endl;
  cout << sum+ans << endl;
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