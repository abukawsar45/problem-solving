#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<int, int> mp;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    mp[x]++;
  }

  int mxF = 0;
  for (auto pair : mp)
  {
    mxF = max(mxF, pair.second);
    // cout<< pair.first<<" "<< pair.second<<endl;
  }

  cout << mxF << endl;

  return 0;
}
