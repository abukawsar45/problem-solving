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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
      // cin >> v[i];
    }

    vector<int> ans;
    int l = 0, r = 0;
    int cnt = 0;
    while (l < n)
    {
      if (v[l] <= q)
      {

        cnt++;
      }

      if (l + 1 == n || v[l] > q)
      {
        //
        //
        if (cnt >= k)
        {
          ans.push_back(cnt);
        }
        cnt = 0;
      }
      l++;
    }
    ll result = 0;
    if (ans.size())
    {
      for (int val : ans)
      {
        int ln = val - k + 1;
        ll totalForThis = (1LL * ln * (ln + 1)) / 2;

        // cout<<totalForThis<<endl;
        result += totalForThis;
      }
    }
    cout << result << endl;
    // cout << ans.size() << endl;
  }
  return 0;
}