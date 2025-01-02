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
  for (int &i : a)
    cin >> i;
  sort(a.begin(), a.end());

  int q;

  cin >> q;
  // cout<<"q "<<q<<endl;

  for (int i = 0; i < q; i++)
  {
    int s;
    cin >> s;

    // int left = 0, right = -1;
    // // int left = n, right = -1;

    // int l = 0, r = n - 1;
    // while (l <= r && r < n)
    // {
    //   int mid = (l + r) / 2;
    //   if (s >= a[mid])
    //   {
    //     right = mid;
    //     l = mid + 1;
    //   }

    //   else
    //     r = mid - 1;
    // }

    // int ans = (right - left + 1);
    // if (ans <= 0)
    //   cout << 0 << "\n";
    // else
    auto ans = upper_bound(a.begin(), a.end(), s);

    cout << ans - (a.begin()) << "\n";
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