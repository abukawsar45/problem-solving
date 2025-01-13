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
  int n, k;
  cin >> n >> k;
  vector<int> v(k);
  for (int i = 0; i < k; i++)
    cin >> v[i];

  // for(auto val: v)
  //   cout << val << " ";
  // cout << '\n';

  for (int i = 0; i < k; i++)
    v[i] = n - v[i];
  sort(v.begin(), v.end());

  vector<ll> prefix(k);
  prefix[0] = v[0];
  for (int i = 1; i < k; i++)
    prefix[i] = prefix[i - 1] + v[i];
  // for (int i = 0; i < k; i++)
  //   cout<<prefix[i]<<" ";
  // for(auto val: v)
  //   cout << val << " ";
 
  int l = 0, r = k-1, mid, dif;
  while (l <= r)
  {
    mid = l + (r - l) / 2;
    if (prefix[mid] < n)
    {
      // cout << prefix[mid] << " == " << mid << endl;
      dif = mid + 1;
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }

  // int dif = lower_bound(prefix.begin(), prefix.end(), n) - prefix.begin();

  cout << dif << '\n';
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