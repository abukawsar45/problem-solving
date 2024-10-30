#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int k = n;
  map<string, int> mp;
  vector<string> v(n);

  while (n--)
  {
    string name;
    cin >> name;
    mp[name] = n;
  }
  for(auto [name, ind]: mp){
    v[ind] = name;
    // cout<< " map " << name<<endl;
  }
  for(auto name : v){
    if (!name.empty())
      cout << name << endl;
  }
  
  

  return 0;
}