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
    int n,c;
    cin >> n>>c;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
      a[i]= v[i]+(i+1);
    }
    sort(a.begin(), a.end());
    int ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++){
      if(sum + a[i] >c)break;
      sum += a[i];
      ans++;
    }
    cout << ans << "\n";
    
  }
  return 0;
}