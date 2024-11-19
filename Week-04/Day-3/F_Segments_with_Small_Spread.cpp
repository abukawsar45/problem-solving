#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n, k;
  cin >> n >> k;
  vector<ll> v(n);
  for (ll &x : v)
    cin >> x;

  // for(int x: v)
  // cout << x << " ";
  int l = 0, r = 0;
  ll ans = 0;
  multiset<ll> ml;
  while (r < n)
  {
    ml.insert(v[r]);
    ll mn = *ml.begin(), mx = *ml.rbegin();
    if (mx - mn <= k)
    {
      ans += (r - l + 1);
    }
    else
    {
      while (l <= r)
      {
        mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= k)
        {
          break;
        }
        ml.erase(ml.find(v[l]));
        l++;
      }
      mn = *ml.begin(), mx = *ml.rbegin();
      if (mx - mn <= k)
      {
        ans += (r - l + 1);
      }
    }
    r++;
  }
cout << ans << endl;
  return 0;
}