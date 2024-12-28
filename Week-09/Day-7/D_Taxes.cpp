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

bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

void solve()
{
  int n;
  cin >> n;

  if (isPrime(n))
  {

    cout << 1 << "\n";
  }
  else if (n % 2 == 0)
  {

    cout << 2 << "\n";
  }
  else
  {

    if (isPrime(n - 2))
      cout << 2 << "\n";
    else
      cout << 3 << "\n";
  }
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