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
  int n = s.size();

  int cntZero = 0, cntOne = 0;
  for (int i = 0; i < n; i++)
  {
    if(s[i] == '0')
      cntZero++;
    else
      cntOne++;
  }
  int mn = min(cntZero, cntOne);
  if(mn==0){
    cout << "NET" << endl;
    return;
  }
  if(mn % 2 == 0)
  {
    
      cout << "NET" << endl;
    
  }
  else
  {
    
      cout << "DA" << endl;
    
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