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
    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    vector<ll> even, odd;
    for (ll val : v)
    {
      if (val % 2 == 0)
      {
        even.push_back(val);
      }
      else
      {
        odd.push_back(val);
      }
    }

    if (even.empty() || odd.empty())
    {
      cout << 0 << "\n";
      continue;
    }
    else
    {
      sort(even.begin(), even.end());
      sort(odd.begin(), odd.end(), greater<ll>());

      ll sum = odd[0];
      ll ans = 0;

      for (ll val : even)
      {
        if (val < sum)
        {
          sum += val;
          ans++;
        }
        else
        {
          ans = 2 + even.size() - 1;
          // break;
        }
      }
      cout << ans << "\n";
    }
  }
  return 0;
}
