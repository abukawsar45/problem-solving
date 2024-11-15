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
    string dir;
    cin >> dir;
    // cout<<dir<<" "<<n<<endl;

    vector<ll> dis;
    ll total = 0;
    int mnChange = 0;
    for (int i = 0; i < n; i++)
    {
      ll L = i;
      ll R = n - 1 - i;
      if (dir[i] == 'L')
      {
        if (R > L)
        {
          mnChange++;
          total += R;
          dis.push_back(R - L);
        }
        else
        {
          total += L;
        }
      }
      else
      {
        if (L > R)
        {
          mnChange++;
          total += L;
          dis.push_back(L - R);
        }
        else
          total += R;
      }
    }

    vector<ll> ans(n + 1);
    for (int i = mnChange; i <= n; i++)
    {
      ans[i] = total;
    }
    sort(dis.begin(), dis.end(), greater<int>());
    for (int i = mnChange - 1; i >= 1; i--)
    {
      total -= dis.back();
      dis.pop_back();
      ans[i] = total;
    }

    for (int i = 1; i <= n; i++)
    {
      cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}