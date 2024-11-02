#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin >> n;
  vector<ll> a(n);

  ll mn = LLONG_MAX;
  ll sum = 0;

  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
    if (a[i] % 2 != 0)
    {
      mn = min(mn, a[i]);
    }
  }
  if (sum % 2 != 0)
    sum -= mn;
  cout << sum << endl;

  return 0;
}
