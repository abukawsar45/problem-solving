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
  vector<int> v(n - 1);
  for (int &x : v)
    cin >> x;

  bool ok = true;
  vector<int> store(n);
  store[0] = v[0];
  store[n - 1] = v[n - 2];
  for (int i = 1; i < n - 1; i++){
    store[i] = v[i] | v[i - 1];
  }
  for (int i = 0; i < n-1; i++){
    if(v[i]!=(store[i]&store[i+1]) )ok = false;
    
  }
  if(ok){
    for (int val : store)
      cout << val << " ";
  }else
    cout << -1;

  cout
      << endl;
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