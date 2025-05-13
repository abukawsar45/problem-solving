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
  
  for (int i = 0; i < s.size(); i++)
  {
    if(s.substr(i, 3)=="144")i+=2;
    else if(s.substr(i, 2)=="14")i++;
    else if(s.substr(i, 1)=="1"){}
    else {no;return;}
  }
  

  yes;
  

  
}

int32_t main()
{
  fastread();
  int t = 1;
//   cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}