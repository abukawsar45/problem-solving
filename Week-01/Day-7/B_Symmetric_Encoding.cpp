#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string sortS = s;
    sort(sortS.begin(), sortS.end());
    // sortS.erase(unique(sortS.begin(), sortS.end()), sortS.end());
    sortS.erase(unique(sortS.begin(), sortS.end()), sortS.end());

    int k = sortS.size();
    int half = (k + 1) / 2;

    map<char, char> mp;
    for (int i = 0; i < half; i++)
    {
      mp[sortS[i]] = sortS[k - 1 - i];
      mp[sortS[k - 1 - i]] = sortS[i];
    }

    string ans;
    for (char c : s)
    {
      ans.push_back(mp[c]);
    }

    cout << ans << endl;
  }
  return 0;
}
