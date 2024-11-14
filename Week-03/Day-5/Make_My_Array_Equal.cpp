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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
      // cin >> v[i];
    }

    map<ll, ll> mp;
    int cnt = 0;
    for (auto it : v)
    {
      if (it != 0 && mp.find(it) == mp.end())
      {
        mp[it]++;
        cnt++;
      }
    }
    
    if (cnt <= 1)
    {
      cout << "YES\n";
    }
    else
      cout << "NO\n";
    }
  return 0;
}