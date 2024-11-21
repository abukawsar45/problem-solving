#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    string s;
    cin >> s;

    vector<ll> pref(n + 1);
    pref[0] = 0; // Initialize prefix sum array with 0

    for (int i = 1; i <= n; i++)
    {
      pref[i] = pref[i - 1] + v[i - 1];
    }
    // for (int i = 1; i <= n; i++)
    // {
    //   cout << pref[i] << " - ";
    // }
    // cout << endl;

    int last = n;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'L')
      {
        int flag = 0;
        for (int j = last-1; j >i; j--)
        {
          if(s[j]=='R')
          {
            last = j;
            flag = 1;
            break;
          }
          else
            last--;
        }
        if(flag)
          sum += pref[last + 1] - pref[i];
      }
    }

    cout << sum << endl;
  }

  return 0;
}
