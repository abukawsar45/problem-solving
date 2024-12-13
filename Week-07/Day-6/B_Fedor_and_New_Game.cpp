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
  int n,m,k;
  cin >> n>>m>>k;
  m += 1;



  vector<int> v(m);
  for (int i = 0; i < m; i++)
  {
    cin >>v[i];
  }
  


  // int mxBit = (1 << n);
  int mxBit = 127;
  // cout<<mxBit<<endl;
  int mine = v[m - 1];
  // cout<<"Mine "<<mine<<endl;
  vector<int> storeCnt;
  for (int i = 0; i < m-1; i++)
  {
    int cnt = 0;
   
    for (int j = n-1; j >= 0; j--)
    {

      if (((v[i] >> j) & 1) != ((mine >> j) & 1))
        cnt++;

      // cout << ((v[i] >> j) & 1) << " vs " << ((mine >> j) & 1) << endl;
    }
    storeCnt.push_back(cnt);
    
  }
  int ans = 0;
  for (auto value : storeCnt)if(value<=k)
      ans++;
  // for (auto value : storeCnt)
  //   cout << value << " ";
    
  cout<<ans<<endl;
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