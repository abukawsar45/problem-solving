#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
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

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int mod = 1e9 + 7;

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &i : a)
    cin >> i;

  ll ans = 0;
  pbds<int> p;
  for (int i = n - 1; i >= 0; i--)
  {
    ans += p.order_of_key(a[i]);

    p.insert(a[i]);
  }
  cout << ans << '\n';

  // for (int i = n-1; i >= 0; i--)
  // {
  //   ans += p.order_of_key(a[i]);
  //   p.insert(a[i]);
  // }
  // cout << ans << '\n';
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