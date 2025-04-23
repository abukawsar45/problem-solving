#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pr pair<int, int>
#define prl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;
const int mod = 1e9 + 7;

void solve()
{
  int n, m;
  cin >> n >> m;
  char arr[n + 10][m + 10];
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> arr[i][j];
    }
  }
  int f = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (arr[i][j] == '1')
      {
        int cnt = 0, cnt1 = 0;
        for (int l = i; l >= 1; l--)
        {
          cnt++;
          if (arr[l][j] == '1')
          {
            cnt1++;
          }
        }
        if (cnt1 != cnt)
        {
          int cnt2 = 0, cnt3 = 0;
          for (int l = j; l >= 1; l--)
          {
            cnt2++;
            if (arr[i][l] == '1')
            {
              cnt3++;
            }
          }
          if (cnt2 != cnt3)
          {
            f = 1;
            break;
          }
        }
      }
    }
    if (f)
    {
      break;
    }
  }
  if (f)
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
}

int32_t main()
{
  fastread();
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}