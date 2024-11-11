#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int l = 0, r = 0;
    int cnt = 0, mn = INT_MAX;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'W')
      {
        cnt++;
      }
      if (i - l + 1 == k)
      {
        mn = min(cnt, mn);
        if (s[l] == 'W')
          cnt--;
        l++;
      }
      r++;
    }
    cout << mn << endl;
  }
  return 0;
}