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

// void
// solve()
// {
//   int n, k;
//   cin >> n >> k;
//   vector<ll> v(n);
//   ll in = 0, mx = (k + n - 1);
//   // cout << in << " " << mx << endl;
//   for (int i = k; i <= mx; i++)
//   {
//     v[in] = i;
//     in++;
//   }
//   vector<ll> prefix(n);
//   prefix[0] = v[0];

//   for (int i = 1; i < v.size(); i++)
//   {
//     prefix[i] = prefix[i - 1] + v[i];
//   }
//   // for(auto x:prefix)
//   // cout << x << " " << '\n';

//   auto ok = [&](ll mid, vector<int> &prefix, ll n)
//   {
//     return mid < n;
//   };
//   ll l = 0, r = 2e9, ans = LLONG_MAX, mid;
//   while (l <= r)
//   {
//     mid = l + (r - l) / 2;
//     if (ok(mid, prefix, n))

//     {
//       ans = min(ans, abs(prefix[mid] - prefix[n - 1]));
//       l = mid + 1;
//     }
//     else
//       r = mid - 1;
//   }
//   cout << ans << endl;
// }

// int32_t main()
// {
//   fastread();
//   int t = 1;
//   cin >> t;
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

ll ok(ll l, ll r, ll k)
{
  // cout << (r * (r + 1) / 2) << " - " << (l * (l - 1) / 2) << " + " << ((r - l + 1) * k) << '\n';
  return (r * (r + 1) / 2) - (l * (l - 1) / 2) + ((r - l + 1) * k);
  // return (r * (r + 1) / 2) - ((l * (l - 1)) / 2) + ((r - l + 1) * k);
}
void solve()
{
  ll n, k;
  cin >> n >> k;

  ll l = 0, r = n - 1, ans = LLONG_MAX, mid;
  while (l <= r)
  {
    mid = (l + r) / 2;
    ll x = ok(0, mid, k);
    ll y = ok(mid + 1, n - 1, k);
    // cout << x << " " << y << endl;
    if (x == y)
    {
      // ans = 0;
      cout << 0 << endl;
      return;
    }
    else if (x < y)
    {
      ans = min(ans, (y - x));
      l = mid + 1;
    }
    else
    {
      ans = min(ans, (x - y));
      r = mid - 1;
    }
  }
  cout << ans << endl;
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
