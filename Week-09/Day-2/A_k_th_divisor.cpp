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
  int n, k;
  cin >> n >> k;
  vector<int> v;
  for (int i = 1; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      if (n / i != i)
        v.push_back(n / i);
    }

  }
  sort(v.begin(), v.end());
  if(v.size()>=k){
    cout << v[k - 1] << endl;
  }
  else
    cout << -1 << '\n';
}


int32_t main()
{
  fastread();
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}