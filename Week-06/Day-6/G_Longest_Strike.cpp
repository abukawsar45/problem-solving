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
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    

    sort(v.begin(), v.end());
    map<int, int> mp;
    for (int i = 0; i < n; i++){
      mp[v[i]]++;
    }
    // for(auto [x,y]: mp)cout<<x<<" "<<y<<endl;
    int ll=-1, rr=-1;
    int l = -1, r =-1;
    for (int i = 0; i < n; i++){
      if(mp[v[i]]<k)continue;
      if(l==-1){
        l = v[i];

      }
      if(i== n-1 || v[i+1]-v[i]>1 || mp[v[i+1]]<k)
      {
        r = v[i];
        if(r-l>=rr-ll)
        {
          ll = l;
          rr = r;
        }
        l = -1, r = -1;
      }
    }
   if(ll ==-1)
     cout << -1 << '\n';
   else
     cout << ll << " " << rr << '\n';
  }
  return 0;
}