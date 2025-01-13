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

bool ok(int k, vector<int> &v, int n)
{
  multiset<int> ml;
  for (int i = 0; i < n; i++)
  {
    ml.insert(v[i]);
  }
  for (int i = 1; i <= k; i++)
  {
    if (ml.empty())
      return false;

    int cur = k - i + 1;
    auto it = ml.upper_bound(cur);
    if (it == ml.begin())
      return false;
    it--;
    ml.erase(it);

    if (!ml.empty())
    {
      it = ml.begin();
      int val = *it;
      ml.erase(it);
      ml.insert(val + cur);
    }
  }
  return true;
}

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;
  sort(v.begin(), v.end());

  int l = 1, r = n, mid, ans = 0;
  while (l <= r)
  {
    mid = l + (r - l) / 2;
    if (ok(mid, v, n))
    {
      ans = mid;
      l = mid + 1;
    }
    else
      r = mid - 1;
  }
  cout << ans << '\n';
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