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
  int l = 0, r = n;
  
  for (int i = 31; i >=0; i--)
  {
    
      // cout << "out = "<<i<<" " << ((1 << i) & n) << endl;
    if((1<<i) & n)
    {
      cout << "if = "<<i<<" " << ((1 << i) & n) << endl;
      l |= (1 << i);
      cout << "L = "<<l << endl;
      break;
    }
  }
  r = n ^ l;

  cout << min(l, r) << " " << max(l, r) << endl;
}

int32_t main()
{
  cout <<  "-i= "<< ((1 << 4) )<< endl;

  fastread();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}