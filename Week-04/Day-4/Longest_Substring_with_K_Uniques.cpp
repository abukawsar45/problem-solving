#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int k)
{
  // int n = s.length();
  int n = s.size();
  // cout << n << endl;
  //
  // for(int x: v)cout << x << endl;
  map<char, int> mp;
  int l = 0, r = 0;
  int cnt = 0;
  while (r < n)
  {
    mp[s[r]]++;

    if (mp.size() == k)
    {
      cnt = max(cnt, (r - l + 1));
      // cout << l << " l r " << r << " records " << r - l + 1 << endl;
      // cout << cnt << endl;
    }
    else
    {
      while (mp.size() > k)
      {
        mp[s[l]]--;
        if (mp[s[l]] == 0)
        {
          mp.erase(s[l]);
        }
        l++;
      }
        }
    r++;
  }
  if (cnt == 0)
    // cout << -1 << endl;
    return -1;
  else
    // cout << cnt << endl;
    return cnt;
  //
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  cout<<solve(s, k);

  return 0;
}