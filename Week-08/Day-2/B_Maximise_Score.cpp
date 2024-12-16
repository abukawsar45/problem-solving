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
  vector<int> v(n);
  for (int i = 0; i <n; i++)
  {
    cin>> v[i];
  }

  vector<int> b;
  for (int i = 0; i < n; i++)
  {
    int l= -1 , r=-1;
    if(i-1>=0)
      l = abs(v[i] - v[i - 1]);
    if(i+1<n)
      r = abs(v[i] - v[i + 1]);
    b.push_back(max(l, r));
  }

  int mn = 1e9;
  for(int val: b)
  {
    mn = min(mn, val);
  }
  cout << mn << endl;
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