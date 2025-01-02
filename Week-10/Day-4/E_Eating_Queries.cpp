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
  vector<int> a(n);
  for (int &i : a)
    cin >> i;
  sort(a.rbegin(), a.rend());

  vector<int> v(n);
  v[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    v[i] = a[i] + v[i - 1];
  }

  for (int i = 0; i < q; i++)
  {
    int key;
    cin >> key;

    int cnt = -1;
    auto it = lower_bound(v.begin(), v.end(),key);
    if(it != v.end())cnt = (it - v.begin())+1;


    // int l = 0, r = n - 1, cnt = -1;
    // while (l <= r && r < n)
    // {
    //   int mid = (l + r) / 2;
    //   if (key <= v[mid])
    //   {
    //     cnt = mid+1;
    //     r = mid - 1;
    //   }
    
    //   else
    //     l = mid + 1;
    // }
    cout << cnt << '\n';
  }
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