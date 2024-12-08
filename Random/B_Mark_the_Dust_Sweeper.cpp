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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    bool allZeros = true;

    for (int i = 0; i < n - 1; i++)
    {
      if (v[i] > 0)
      {
        allZeros = false;
      }
    }
    if (allZeros)
    {
      cout << 0 << endl;
      continue;
    }

    int fst = v[0];
    int l = 0;
    if (fst == 0)
    {
      for (int i = 0; i < n; i++)
      {
        if (v[i] > 0)
        {
          l = i;
          break;
        }
      }
    }

    ll ans = 0;
    for (int i = l; i < n - 1; i++)
    {
      if (v[i] > 0)
      {
        ans += v[i];
      }
      else
        ans += 1;
    }

    cout << ans << endl;
  }
  return 0;
}