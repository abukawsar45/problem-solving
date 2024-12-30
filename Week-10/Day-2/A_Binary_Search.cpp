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

  for (int i = 0; i < q; i++)
  {
    int key, l = 0, r = n - 1, mid;
    cin >> key;
    bool flag = false;
    while (l <= r)
    {
      mid = (l + r) / 2;
      if (key == a[mid])
      {
        flag = true;
        break;
      }
      else if (key < a[mid])
        r = mid - 1;
      else l = mid + 1;
    }
    if (flag)
      yes;
    else
      no;
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