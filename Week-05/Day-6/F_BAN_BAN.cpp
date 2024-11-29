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
    n *= 3;

    vector<pair<int, int>> a;
    int l = 2, r = n;
    for (int i = 0; i < n; i++)
    {
      if (l < r)
      {
        a.push_back({l, r});
        l += 3;
        r -= 3;
      }
    }

    cout << a.size() << '\n';
    for (auto [x, y] : a)
    {
      cout << x << " " << y << endl;
    }
  }
  return 0;
}