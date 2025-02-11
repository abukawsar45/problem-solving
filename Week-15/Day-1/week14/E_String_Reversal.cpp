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
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int mod = 1e9 + 7;

void solve()
{
  int n;
  cin >> n;
  string s, r;
  cin >> s;

  r = s;

  reverse(r.begin(), r.end());

  map<char, vector<int>> pos_s, pos_r;
  for (int i = 0; i < n; i++)
  {
    pos_s[s[i]].push_back(i);
    pos_r[r[i]].push_back(i);
  }

  // for (auto [x, y] : pos_s)
  // {
  //   cout << x << " -> ";
  //   for (int z : y)
  //     cout << z << " ";

  //   cout << '\n';
  // }
  // cout << '\n';
  // for (auto [x, y] : pos_r)
  // {
  //   cout << x << " -> ";
  //   for (int z : y)
  //     cout << z << " ";

  //   cout << '\n';
  // }
  // cout << '\n';

  vector<int> per(n);
  for (char ch = 'a'; ch <= 'z'; ch++)
  {
    for (int i = 0; i < pos_s[ch].size(); i++)
    {
      per[pos_r[ch][i]] = pos_s[ch][i];
    }
  }

  for(int val: per)
    cout << val << " ";
  cout << '\n';

  pbds<int> pb;

  int ans = 0;
  for (int i = n-1; i >=0; i--)
  {
    ans += pb.order_of_key(per[i]);
    cout<<ans<<" "<<per[i]<<endl;
    pb.insert(per[i]);
    cout<<ans<<" - "<<per[i]<<endl;

  }
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