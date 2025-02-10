#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statictics_node_update>;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

const int mod = 1e9 + 7;

void solve()
{
  int n, m;
  cin >> n >> m;
  pbds<int> pb;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    pb.insert(x);
  }

  for (int i = 1; i <= m; i++)
  {
    int x;
    cin >> x;
    cout << pb.order_of_key(x + 1) << " ";
  }
  cout << '\n';
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