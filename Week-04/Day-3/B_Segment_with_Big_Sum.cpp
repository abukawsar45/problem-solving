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
  int len = INT_MAX;
  while (r < n)
  {
    sum += v[r];
    // cout<<"sum = "<<sum<<endl;
    if (sum >= k)
    {
      while (l <= r && sum >= k)
      {
        len = min(len, (r - l +1));
        sum -= v[l];
        l++;
      }
    }
    r++;
  }
  //  -10^9  INT64_MAX
  // cout<<len<<" "<<sum<<endl;
  if(len == INT_MAX)
    cout << -1 << '\n';
  else
    cout << len << '\n';

  return 0;
}