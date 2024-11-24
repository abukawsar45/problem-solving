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
    int a, b, c;
    cin >> a >> b >> c;
    ll bToC = abs(b-c);
    ll cToA = abs(c-1);
    ll second = bToC + cToA;
    ll first = abs(a-1);

    if(first < second)cout<<1<<endl;
    else if(first > second)cout<<2<<endl;
    else cout<<3<<endl;
    
  }
  return 0;
}