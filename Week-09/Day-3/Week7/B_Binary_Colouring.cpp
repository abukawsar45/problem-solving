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

  vector<int> v;
  while (n)
  {
    if (n % 2 == 0)
      v.push_back(0);
    else
      v.push_back(1);
    n /= 2;
  }
  v.push_back(0);

  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] == 1 && v[i + 1] == 1)
    {
      for (int j = i; j < v.size(); j++)
      {
        if (v[j] == 0)
        {
          v[i] = -1;
          v[j] = 1;
          break;
        }
        else
          v[j] = 0;
      }
    }
  }

  cout << v.size() << '\n';
  for (int val : v)
    cout << val << " ";
  cout << endl;
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