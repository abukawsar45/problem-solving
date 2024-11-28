#include <bits/stdc++.h>
using namespace std;

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

    int z = 0;
    int nz = 0;
    for (int i = 0; i < n; i++)
    {
      if (v[i] == 0)
        z++;
    }

    nz = n - z;
    int ans;
    if (z == 0)
      ans = 0;
    else
    {
      if (nz >= z - 1)
        ans = 0;
      else
      {
        auto mx = max_element(v.begin(), v.end());
        if (*mx == 1)
          ans = 2;
        else
          ans = 1;
      }
    }

    cout << ans << endl;
  }
  return 0;
}