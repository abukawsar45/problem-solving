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

  deque<ll> ans;
  for (int k =0; k <= __lg(n); k++)
  {
    if((n>>k)&1)
    {
      ll val = n - (1LL << k);
      if(val)ans.push_front(val);
    }
    
  }
  ans.push_back(n);
  cout<<ans.size()<<endl;
  for(auto val: ans)
    cout<< val << " ";
  cout << endl;
  
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