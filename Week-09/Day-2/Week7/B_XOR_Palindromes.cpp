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
  string s;
  cin >> s;
  int cnt = 0, cnt2 = 0;
  for (int i = 0; i < n / 2; i++)
  {
    cnt += s[i] == s[n - i - 1];
    cnt2 += s[i] != s[n - i - 1];
  }
  // cout<<cnt<<" "<<cnt2<<endl;
  vector<int> ans(n + 1);
  int run = (cnt * 2) + cnt2;
  if (n & 1)
  {
    for (int i = cnt2; i <= run+1; i++)
    {
      ans[i] =1;
    }
  }
  else
  {
    for (int i = cnt2; i <= run; i += 2)
    {
      ans[i] = 1;
    }
  }
  for (int val : ans)
    cout << val;

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