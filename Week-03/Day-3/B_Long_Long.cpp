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
    vector<ll> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      v.push_back(x);
      sum += abs(x);
    }
    // cout << sum << endl;

    int l = 0;
    int op = 0;
    bool flag = false;

    while (l < n)
    {

      int x = v[l];
      if (x < 0)
      {
        flag = true;
      }
     
      if (flag)
      {
        if (l + 1 == n || v[l + 1]>0)
        {
          op++;
          flag = false;
        }
      }
      l++;
    }
    cout << sum << " " << op << endl;
  }
  return 0;
}