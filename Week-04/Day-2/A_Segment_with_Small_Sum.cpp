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

  // for(int val: v)cout << val << endl;
  ll sum = 0;
  int l = 0, r = 0;
  int len = 0;
  while (r < n)
  {
    sum += v[r];
    if (sum <= k)
    {
      len = (r - l + 1);
    }
    else
    {
      sum -= v[l];
      l++;
    }
    r++;
  }
  cout << len << endl;
  return 0;
}