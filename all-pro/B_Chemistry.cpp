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
  int n , k;
  
  cin >> n>>k;

  string s;cin>>s;
  map<char, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[s[i]]++;
  }
  int cnt=0;
//   for(auto [x,y]:mp)cout<<x<<" "<<y<<endl;
  for(auto [x,y]:mp)
  {
    if(y%2!=0)
    {
      cnt++;
    }
  }
  cnt--;
    if(cnt>k)
    {
        no;
        return;
    }
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