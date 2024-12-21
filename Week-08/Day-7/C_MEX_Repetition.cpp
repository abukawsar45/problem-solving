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
  ll n, k;
  cin >> n >> k;
  ll totSum = n * (n + 1) / 2;
  ll currSum = 0;
  vector<ll> nums;
  for (int i = 0; i < n; i++)
  {
    ll curr;
    cin >> curr;
    nums.push_back(curr);
    currSum += curr;
  }
  nums.push_back(totSum - currSum);
  k = k % (n + 1);
  for (int i = 0; i < n; i++)
  {
    cout << nums[(i - k + n + 1) % (n + 1)] << " ";
  }
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