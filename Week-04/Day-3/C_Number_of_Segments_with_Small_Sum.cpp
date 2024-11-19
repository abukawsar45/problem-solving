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

  int l = 0, r = 0;
  ll sum = 0;
  // vector<int> storeLen;
  ll ans = 0;
  while (r < n)
  {
    sum += v[r];
    if (sum <= k)
    {
      ans += (r - l + 1);
    }
    else{
      while (sum>k && l<=r )
      {
        sum -= v[l];
        l++;
      }
      if (sum <= k)
      {
        ans += (r - l + 1);
      }
    }
    r++;
  }
  cout<<ans<<endl;

  return 0;
}