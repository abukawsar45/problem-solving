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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      // int x;
      // cin >> x; 
      // v.push_back(x);
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int res1 = v[n - 1] - v[2];
    int res2 = v[n - 3] - v[0];
    int res3 = v[n - 2] - v[1];

    int mn = min(res1, res2);
    int ans = min(res3, mn);
    cout << ans << '\n';
  }
  return 0;
}