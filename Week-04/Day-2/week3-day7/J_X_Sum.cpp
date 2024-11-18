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
    int n, m;
    cin >> n >> m;
    ll mx = 0;
    vector<vector<ll>> grid(n, vector<ll>(m, 0));

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> grid[i][j];
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        ll tmpSum = 0;
        tmpSum += grid[i][j];
        ll tmpI = i - 1, tmpJ = j - 1;
        while (tmpI >= 0 && tmpJ >= 0)
        {
          tmpSum += grid[tmpI][tmpJ];
          tmpI--;
          tmpJ--;
        }
        tmpI = i - 1, tmpJ = j + 1;
        while (tmpI >= 0 && tmpJ < m)
        {
          tmpSum += grid[tmpI][tmpJ];
          tmpI--;
          tmpJ++;
        }
        tmpI = i + 1, tmpJ = j - 1;
        while (tmpI < n && tmpJ >= 0)
        {
          tmpSum += grid[tmpI][tmpJ];
          tmpI++;
          tmpJ--;
        }
        tmpI = i + 1, tmpJ = j + 1;
        while (tmpI < n && tmpJ < m)
        {
          tmpSum += grid[tmpI][tmpJ];
          tmpI++;
          tmpJ++;
        }
        mx = max(mx, tmpSum);
      }
    }
    cout<<mx<<endl;
  }
  return 0;
}