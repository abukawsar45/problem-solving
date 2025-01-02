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
  vector<int> a(n);
  for (int &x : a)cin >> x;

  vector<int> prefix(n);
  prefix[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    prefix[i] = a[i] + prefix[i - 1];
  }
  // for(int val: prefix)
  //   cout << val << " ";
  int q;
  cin >> q;
  while (q--){
    int key;
    cin >> key;
    int idx = lower_bound(prefix.begin(), prefix.end(), key) - prefix.begin();
    cout << idx+1 << '\n';
  }
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