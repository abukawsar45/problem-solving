#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, m;
  cin >> n >> m;
  map<string, string> mp, mp2;
  for (int i = 0; i < n; i++)
  {
    string sName, sIp;
    cin >> sName >> sIp;
    mp[sIp + ";"] = sName;
  }
  for (int i = 0; i < m; i++)
  {
    string cName, ipNum;
    cin >> cName >> ipNum;
    // string serverName = ;
    cout << cName << " " << ipNum << " #" << mp[ipNum] << endl;
    }
  
  return 0;
}