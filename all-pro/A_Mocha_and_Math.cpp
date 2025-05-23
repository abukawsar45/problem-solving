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
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int l = 0, r = n - 1;
  
  int i=0;
    while (i <= r)
    {
        // cout<<a[l+i]<<" "<<a[r-i]<<endl;
        a[i] = a[l+i] & a[r-i];
        i++;
        
     
    }
    int ans =a[0];
    for (auto val: a)
    {
        ans &= val;
    }
    cout<<ans<<endl;
    
  
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