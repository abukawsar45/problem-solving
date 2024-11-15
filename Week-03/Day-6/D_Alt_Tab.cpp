#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, int> mp;
  map<int, string> mp2;
  for (int i = 1; i <= n; i++)
  {
    string s;
    cin >> s;
    mp[s] = i;
  }

  for (auto [x, y] : mp)
    mp2[y] = x;

  // auto it = mp2.end();
  string ans;
  for (auto it = mp2.rbegin(); it != mp2.rend(); it++)
  {

    // cout << it->first << " " << it->second << endl;
    int l = it->second.size();
    string ss = it->second.substr(l - 2, l);
    ans += ss;
    // cout << ss;
  }
  cout<<ans <<endl;

  return 0;
}