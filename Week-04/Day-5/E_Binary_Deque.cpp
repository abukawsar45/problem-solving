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
    int n, k;
    cin >> n>>k;
    vector<ll> v(n);
    ll mainSum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      mainSum += v[i];
    }

    if(mainSum < k){
      cout << -1 << "\n";
      continue;
    }
    if(mainSum == k){
      cout<< 0<<'\n';
      continue;
    }

    int l=0, r=0;
    ll sum = 0;
    int ans = 0;
    while (r < n){
      sum += v[r];
      if(sum == k){
        ans = max(ans, r - l + 1);
      }
      else if(sum > k){ 
        while(sum>k && l<r){
          sum -= v[l];
          l++;
        }
      }
      r++;
    }
    cout<<n-ans<<endl;
  }
  return 0;
}