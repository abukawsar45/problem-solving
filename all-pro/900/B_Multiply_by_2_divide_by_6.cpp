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
  int cnt_2=0, cnt_3=0;
  while (!(n%2))
  {
    n/=2;
    cnt_2++;
  }
  while (!(n%3))
  {
    n/=3;
    cnt_3++;
  }
  if(n!=1 || cnt_2>cnt_3)minus;
  else cout<<(cnt_3-cnt_2)+cnt_3<<'\n';
  
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