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
  cin >> n>> q;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<ll>pre(n);
  pre[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pre[i] = pre[i - 1] + a[i];
  }
  while(q--){
    ll l, r, k; cin >> l >> r >> k;
    ll sum = pre[n - 1];
    ll subSum = pre[r - 1];
    if (l > 1) subSum -= pre[l - 2];
    sum -= subSum;
    sum += (r - l + 1LL) * k;
    if (sum % 2 == 1) yes;
    else no;

  }
  // for(auto i : pre)
  // {
  //   cout << i << " ";
  // }
  
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