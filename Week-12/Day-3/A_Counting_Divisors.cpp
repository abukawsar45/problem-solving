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

const int maxN = 1e6 + 5;

vector<int> divisors(maxN);

int32_t main()
{
  fastread();

  for (int i = 1; i <= maxN; i++)
  {
    for (int j = i; j < maxN; j += i)
    {
      divisors[j]++;
    }
  }
  int t = 1;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << divisors[n] << endl;
  }

  return 0;
}