#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int &x : v)
    cin >> x;

  // for(int x: v)cout << x << endl;
  map<int, int> mp;
  int l = 0, r = 0;
  long long cnt = 0;
  while (r < n)
  {
    mp[v[r]]++;

    if (mp.size() <= k)
    {
      cnt += (r - l + 1);
      cout << l << " l r " << r << " records " << r - l + 1 << endl;
      cout << cnt << endl;
    }
    else
    {
      while (mp.size() > k)
      {
        mp[v[l]]--;
        if (mp[v[l]] == 0)
        {
          mp.erase(v[l]);
        }
        l++;
      }
      if (mp.size() <= k)
      {
        cnt += (r - l + 1);
        cout << l << " nd l r " << r << " records " << r - l + 1 << endl;
        cout << cnt << endl;
      }
    }
    r++;
  }
  cout << cnt << endl;
  return 0;
}