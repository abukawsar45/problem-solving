// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n, m;
//     cin >> n >> m;

//     vector<int> ans(n);
//     int cnt = 0;

//     if (n > m)
//     {
//       cout << "No" << '\n';
//       continue;
//     }
//     else if (n % 2 == 0 && m % 2 == 0)
//     {
//       for (int i = 0; i < n - 2; i++)
//       {
//         ans[i] = 1;
//         cnt++;
//       }
//       int remindVal = m - cnt;
//       ans[n - 2] = remindVal / 2;
//       ans[n - 1] = remindVal - ans[n - 2];
//     }
//     else if (n % 2 == 1 && m % 2 == 0)
//     {
//       for (int i = 0; i < n - 1; i++)
//       {
//         ans[i] = 1;
//         cnt++;
//       }
//       int remindVal = m - cnt;
//       ans[n - 1] = remindVal;
//     }
//     else if (n % 2 == 1 && m % 2 == 1)
//     {
//       for (int i = 0; i < n - 1; i++)
//       {
//         ans[i] = 1;
//         cnt++;
//       }
//       int remindVal = m - cnt;
//       ans[n - 1] = remindVal;
//     }
//     if (n % 2 == 0 && m % 2 == 1)
//     {

//       cout << "No" << endl;
//     }
//     else
//     {
//       cout << "Yes" << endl;
//       for (int val : ans)
//         cout << val << " ";
//       cout << endl;
//     }
//   }
//   return 0;
// }
#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e6 + 5;

#define ll long long int
#define Faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);

int main()
{
  Faster;
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;

    if (n > m)
    {
      cout << "No" << endl;
      continue;
    }

    vector<int> ans(n + 1);
    int sum = 0;
    if (n % 2 == 0 and m % 2 == 0)
    {
      cout << "Yes" << endl;
      for (int i = 1; i <= n - 2; i++)
      {
        ans[i] = 1;
        sum++;
      }
      ans[n - 1] = (m - sum) / 2;
      ans[n] = ans[n - 1];
    }
    else if (n % 2 == 1 and m % 2 == 0)
    {
      cout << "Yes" << endl;
      for (int i = 1; i <= n - 1; i++)
      {
        ans[i] = 1;
        sum++;
      }
      ans[n] = m - sum;
    }
    else if (n % 2 == 0 and m % 2 == 1)
    {
      cout << "No";
      continue;
    }
    else if (n % 2 == 1 and m % 2 == 1)
    {
      cout << "Yes" << endl;
      for (int i = 1; i <= n - 1; i++)
      {
        ans[i] = 1;
        sum++;
      }
      ans[n] = m - sum;
    }
    for (int i = 1; i <= n; i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
