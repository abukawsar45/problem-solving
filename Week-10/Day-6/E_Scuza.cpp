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
  int n, q;
  cin >> n>>q;
  vector<int> a(n);
  for(int &i : a)
    cin >> i;

  vector<pr> v;
  vector<int> prefix(n);
  prefix[0] = a[0];
  int mx = a[0], ind =0;
  
  v.push_back({0, mx});
  for (int i = 1; i < n; i++)
  {
    if(mx<a[i]){
      mx = a[i];
      ind = i;
    }
    v.push_back({ind, a[i]});
    prefix[i] = prefix[i - 1] + a[i];
  }

  while (q--)
  {
    int key;
    cin >> key;
    ll ans = 0;
    int l=0, r= n-1;
    while (l <= r){
      int mid = l + (r - l) / 2;
      if(a[v[mid].first]<=key){
        ans = prefix[mid];
        l = mid + 1;
      }
      else{
        r = mid - 1;
      }
    }
    cout << ans << " ";
  }
  cout << '\n';
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