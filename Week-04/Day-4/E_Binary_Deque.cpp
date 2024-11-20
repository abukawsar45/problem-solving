#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> v[i];

    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
      pref[i] = pref[i - 1] + v[i];

    ll ans = LLONG_MAX;
    bool flag = false;

    if (pref[n] < s)
    {
      flag = false;
    }
    else if (pref[n] == s)
    {
      flag = true;
      ans = 0;
    }
    else
    {
      for (int i = 1; i <= n; i++)
      {
        ll curr = pref[i - 1] + s;
        if (pref[n] < curr)
          continue;

        auto it = upper_bound(pref.begin(), pref.end(), curr);
        it--; 
        ll dist = it - pref.begin();
        ans = min(ans, n - (dist - i + 1));
      }
      flag = true;
    }

    if (flag)
      cout << (ans == LLONG_MAX ? -1 : ans) << "\n";
    else
      cout << -1 << "\n";
  }

  return 0;
}
