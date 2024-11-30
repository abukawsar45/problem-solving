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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      mp[x]++;
    }

    int mx = 0, ans = 0;
    for(auto [x, y]: mp){
      mx = max(mx, y);
    }

    while(mx<n){
      int remind = n - mx;
      int can_add = mx;
      ans++;
      ans += min(remind, can_add);
      mx += min(can_add, remind);
    }


    cout<<ans << endl;
  }
  return 0;
}