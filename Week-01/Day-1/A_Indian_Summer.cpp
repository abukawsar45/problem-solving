#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin >> n;
  map<pair<string, string>, bool> mp;
  while (n--)
  {
    string a, b;
    cin >> a >> b;
    mp[{a,b}]=true;
  }

  // print
  for (auto val:mp)
  {
    pair<string, string> p = val.first;
    bool bl = val.second;
    // cout<<p.first<<" "<<p.second<<endl;
    cout << val.first.first << " " << val.first.second << endl;
  }
    cout << mp.size() << endl;
  return 0;
}