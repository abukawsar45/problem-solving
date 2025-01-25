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
const int maxN = 3000 + 7;
vector<int> primeDivisors(maxN, 0);

// Sieve to count distinct prime divisors
void sieve()
{
  for (int i = 2; i < maxN; i++)
  {
    if (primeDivisors[i] == 0)
    {
      for (int j = i; j < maxN; j += i)
      {
        primeDivisors[j]++;
      }
    }
  }
}

void solve()
{
  

  int n;
  cin >> n;
  
  // for (int i = 0; i <= n;i++)
  //   cout <<i<<" -> "<<  primeDivisors[i] << "\n";

  int count = 0;
  for (int i = 2; i <= n; i++)
  {
    if (primeDivisors[i] == 2)

      count++;
  }

  cout << count << '\n';
}

int32_t main()
{
  fastread();

  sieve();

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
