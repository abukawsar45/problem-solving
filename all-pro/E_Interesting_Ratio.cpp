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

const int N = 1e7;
bool isPrime[N + 1];
vector<int> primes;

void solve()
{
  int n;
  cin >> n;
  long long ans = 0;
  for (int i = 0; i < primes.size() && primes[i] <= n; i++)
  {
    ans += n / primes[i];
  }

  cout << ans << '\n';
}

int32_t main()
{
  fastread();
  int t = 1;
  cin >> t;
  // for (int i = 0; i <= N; i++)
  // {
  //   isPrime[i] = true;
  // }
  for (int i = 0; i <= N; i++)
  {
    isPrime[i] = true;
  }
  
  // for (int i = 2; i <= N; i++)
  // {
  //   if (isPrime[i])
  //   {
  //     primes.push_back(i);
  //     for (int j = 2; i * j <= N; j++)
  //     {
  //       isPrime[i * j] = false;
  //     }
  //   }
  // }
  for (int i = 2; i <= N; i++)
  {
    if (isPrime[i])
    {
      primes.push_back(i);
      for (int j = 2; i*j <=N; j++)
      {
        isPrime[i*j] = false;
      }
    }
  }
  

  while (t--)
  {
    solve();
  }

  return 0;
}