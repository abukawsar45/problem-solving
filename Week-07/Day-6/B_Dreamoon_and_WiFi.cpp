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
  string s1, s2;
  cin >> s1 >> s2;

  int oneS1 = 0, oneS2 = 0, unR = 0;
  for (int i = 0; i < s1.size(); i++)
  {
    if (s1[i] == '+')
    {
      oneS1++;
    }
    if (s2[i] == '+')
    {
      oneS2++;
    }
    if (s2[i] == '?')
    {
      unR++;
    }
  }

  // cout<<oneS1<<" "<<oneS2<<" "<<unR <<endl;

  int cnt = 0;
  for (int i = 0; i < (1 << unR); i++)
  {
    if (__builtin_popcount(i) + oneS2 == oneS1)
    {
      cnt++;
    }
  }

  cout << fixed << setprecision(12) << (double)cnt / (1 << unR) << '\n';
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