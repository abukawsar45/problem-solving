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

const int maxN = 100000 + 7;

vector<int> allPrimes;

// O(nLogLog(n))______st_____
void seive()
{
  vector<bool> prime(maxN + 1, true);
  for (int i = 2; i * i <= maxN; i++)
  {
    if (prime[i])
    {
      for (int j = i + i; j <= maxN; j += i)
      {
        prime[j] = false;
      }
    }
  }

  for (int i = 2; i <= maxN; i++)
  {
    if (prime[i])
    {
      allPrimes.push_back(i);
    }
  }
}

  void solve()
  {
    ll n;
    cin >> n;
    ll ans1, ans2;
    bool val1, val2, ans;
    val1 = true;
    val2 = ans = false;

    for (int i = 0; i < 1000000; i++)
    {
      if (allPrimes[i] - 1 >= n && val1)
      {
        val1 = false;
        ans1 = allPrimes[i];
        val2 = true;
      }
      else if(allPrimes[i] - ans1 >= n && val2)
      {
        ans2 = allPrimes[i];
        ans = true;
        break;
      }
    }
    if (ans)
    {
      cout << ans1 * ans2 << '\n';
    }
  }

  int32_t main()
  {
    fastread();
    int t = 1;
    cin >> t;
    seive();
    while (t--)
    {
      solve();
    }

    return 0;
  }