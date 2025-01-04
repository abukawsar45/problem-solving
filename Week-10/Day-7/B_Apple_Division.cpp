// #include <bits/stdc++.h>
// #define int long long
// #define ll long long
// #define pr pair<int, int>
// #define prl pair<ll, ll>
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define cyes cout << "Yes" << endl
// #define cno cout << "No" << endl
// #define minus cout << -1 << endl
// #define fastread()              \
//   ios_base::sync_with_stdio(0); \
//   cin.tie(0);                   \
//   cout.tie(0);

// using namespace std;
// const int mod = 1e9 + 7;

// ll calculate(int ind, vector<int> &v, ll sum1, ll sum2, ll n)
// {
//   if (ind == n)
//   {
//     return abs(sum1 - sum2);
//   }

//   ll choose = calculate(ind + 1, v, sum1 + v[ind], sum2, n);

//   ll unchoose = calculate(ind + 1, v, sum1, sum2 + v[ind], n);

//   return min(choose, unchoose);
// }

// void solve()
// {
//   int n;
//   cin >> n;
//   ll ans = 0;
//   vector<int> v(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> v[i];
//     ans += v[i];
//   }
//   // if(ans%2==0)
//   //   cout << 0 << '\n';
//   // else
//   //   cout << 1 << '\n';

//   ll res = calculate(0, v, 0, 0, n);
//   cout << res << '\n';
// }

// int32_t main()
// {
//   fastread();
//   int t = 1;
//   // cin >> t;
//   while (t--)
//   {
//     solve();
//   }

//   return 0;
// }

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
  vector<int> v(n);
  ll totalSum = 0;

  for (int &i : v)
  {
    cin >> i;
    totalSum += i;
  }

  ll minDifference = LLONG_MAX;

  for (int mask = 0; mask < (1 << n); mask++)
  {
    ll sum1 = 0;

    for (int i = 0; i < n; i++)
    {
      if (mask & (1 << i))
      {
        sum1 += v[i];
      }
    }

    ll sum2 = totalSum - sum1;
    minDifference = min(minDifference, abs(sum1 - sum2));
  }

  cout << minDifference << '\n';
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
