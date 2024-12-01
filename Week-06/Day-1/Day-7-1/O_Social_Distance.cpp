// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long


// int main()
// {
//   ll t;
//   cin >> t;
//   while (t--)
//   {
//     ll n, k;
//     string s;
//     std::vector<ll> v;
//     cin >> n >> k;
//     cin >> s;

//     for (ll i = 0; i < n; i++)
//     {
//       if (s[i] == '1')
//         v.push_back( i + 1);
//     }
//     ll cnt = 0;
//     if (v.size() == 0)
//     {
//       for (ll i = 1; i <= n; i += (k + 1))
//         cnt++;
//     }

//     else
//     {
//       for (ll i = v[v.size() - 1] + (k + 1); i <= n; i += (k + 1))
//       {
//         cnt++;
//       }

//       for (ll i = 1; i <= (v[0] - (k + 1)); i += (k + 1))
//       {
//         cnt++;
//       }

//       ll ft, sd, dif;
//       for (ll i = 0; i < v.size() - 1; i++)
//       {
//         ft = v[i];
//         sd = v[i + 1];
//         for (ll j = ft + (k + 1); j <= sd - (k + 1); j += (k + 1))
//         {
//           cnt++;
//         }
//       }
//     }
//     cout << cnt << endl;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  int t;
  cin >> t; // Number of test cases

  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<ll> v; 
    for (ll i = 0; i < n; i++)
    {
      if (s[i] == '1')
      {
        v.push_back(i);
      }
    }

    ll cnt = 0; 

    if (v.empty())
    {
      // No '1's in the string
      for (ll i = 0; i < n; i += (k + 1))
      {
        cnt++;
      }
    }
    else
    {
      // Handle positions before the first '1'
      ll first_1 = v[0];
      for (ll i = 0; i < first_1 - k; i += (k + 1))
      {
        cnt++;
      }

      // Handle positions between consecutive '1's
      for (ll i = 0; i < v.size() - 1; i++)
      {
        ll left = v[i];
        ll right = v[i + 1];
        for (ll j = left + k + 1; j < right - k; j += (k + 1))
        {
          cnt++;
        }
      }

      // Handle positions after the last '1'
      ll last_1 = v.back();
      for (ll i = last_1 + k + 1; i < n; i += (k + 1))
      {
        cnt++;
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}
