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
  cin >> n >> q;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;

  for (int i = 0; i < q; i++)
  {
    int key;
    cin >> key;
    int l = 0, r = n - 1, ans = n;
    while (r >= l)
    {
      int mid = l + (r - l) / 2;
      // cout<<key<<" "<<mid<<" == "<<ans<<endl;
      if (key <= v[mid])
      {
        ans = mid;
        r = mid - 1;
      }
      else
        l = mid + 1;
    }
    cout << ans + 1 << '\n';
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