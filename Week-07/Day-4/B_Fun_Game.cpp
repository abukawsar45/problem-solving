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
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  // cout<< s1<<" "<< s2;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (s1[i] == '0' && s2[i] == '1')
    {
      flag = true;
      break;
    }
    else if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '1' && s2[i] == '1'))
    {
      break;
    }
  }
  if(flag )
    no;
  else
    yes;
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