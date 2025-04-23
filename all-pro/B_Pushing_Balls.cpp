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
  char v[n + 10][m + 10];
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> v[i][j];
    }
  }
  bool flag = false;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (v[i][j] == '1')
      {
        int cnt1 = 0, cnt2 = 0;
        for (int k = i; k >= 1; k--)
        {
          cnt1++;
          if (v[k][j] == '1')
            cnt2++;
        }
        if (cnt1 != cnt2)
        {
          int cnt3 = 0, cnt4 = 0;
          for (int l = j; l >= 1; l--)
          {
            cnt3++;
            if (v[i][l] == '1')
              cnt4++;
          }
          if (cnt3 != cnt4)
          {
            flag = true;
            break;
          }
        }
      }
    }
    // if(flag)
    //   break;
  }
  if (flag)
    no;
  else
    yes;
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