#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, bool> mp;
  while(n--){
    string name;
    cin >> name;
    if(mp.find(name) == mp.end()){
      mp[name] = true;
      cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
  }
  return 0;
}