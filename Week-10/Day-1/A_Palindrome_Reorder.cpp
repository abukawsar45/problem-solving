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
  map<char, int> mp;
  for (char c : s)
    mp[c]++;
  int cnt = 0;
  char ch;
  for (auto x : mp)
  {
    if (x.second % 2)
    {
      ch = x.first;
      cnt++;
    }
  }
  if ((s.size() % 2 == 0 and cnt > 0) or cnt > 1)
    cout << "NO SOLUTION";
  else
  {
    string res = "";
    for (auto x : mp)
    {
      for (int i = 1; i <= x.second / 2; i++)
        res += x.first;
    }
    cout << res;
    if (s.size() % 2)
      cout << ch;
    reverse(res.begin(), res.end());
    cout << res;
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