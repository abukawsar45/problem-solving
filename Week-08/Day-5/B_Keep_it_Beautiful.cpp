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
  int n;
  cin >> n;
  vector<int> a(n), taken;
  string ans = "";
  bool broken = false;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (taken.empty())
    {
      ans.push_back('1');
      taken.push_back(a[i]);
    }
    else
    {
      if (broken)
      {
        if (a[i] < taken.back())
        {
          ans.push_back('0');
        }
        else
        {
          if (a[i] > taken[0])
          {
            ans.push_back('0');
          }
          else
          {
            ans.push_back('1');
            taken.push_back(a[i]);
          }
        }
      }
      else
      {

        if (a[i] >= taken.back())
        {
          ans.push_back('1');
          taken.push_back(a[i]);
        }
        else
        {
          if (a[i] > taken[0])
          {
            ans.push_back('0');
          }
          else
          {
            broken = true;
            ans.push_back('1');
            taken.push_back(a[i]);
          }
        }
      }
    }
  }

  cout << ans << endl;
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