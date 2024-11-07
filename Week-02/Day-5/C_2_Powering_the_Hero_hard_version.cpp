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
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      v.push_back(x);
    }
    priority_queue<ll> pq;

    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
      if (v[i] != 0)
        pq.push(v[i]);
      else
      {
        if (!pq.empty())
        {
          ans += pq.top();
          pq.pop();
        }
      }
    }

    cout << ans << "\n";
  }
  return 0;
}