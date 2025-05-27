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
  int x, m,n;
  cin >> x>>n>>m;
  if(x <= 10 && m != 0)
  {
    cout << "YES" << endl;
    return;
  }
  for (int i = 0; i < n; i++)
  {
     x = (x/2)+10;
        
  }
  
  int totalM = m * 10;
    x -= totalM;
    
    
  if(x>0)no;
    else
    {
        yes;
    }
  
  
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