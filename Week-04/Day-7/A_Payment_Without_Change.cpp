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
    ll a, b,n,s;
    cin>>a>>b>>n>>s;

    ll total = (a * n * 1LL) + b;
    // cout<<"Total "<<total<<endl;
    if((total == s) || a*n == s )cout<<"YES"<<endl;
    else if(total<s)cout<<"NO"<<endl;

    else {
      // cout << "YES" << endl;
      ll needForA = s / n;
      ll TotalForA = needForA*n;
      ll haveForA = a*n;
      // cout<<"haveForA "<<haveForA<<endl;

      TotalForA =(haveForA, TotalForA);

      // cout<<"total "<<TotalForA<<endl;
      if(TotalForA+b >= s)cout<<"YES"<<endl;
      else
        cout << "NO" << endl;

      // if()
    }
  }
  return 0;
}