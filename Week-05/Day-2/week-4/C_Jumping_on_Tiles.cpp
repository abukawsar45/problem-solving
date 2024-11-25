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
    string s;
    cin >> s;
    int n = s.length();
    char mn = min(s[0], s[n - 1]);
    char mx = max(s[0], s[n - 1]);
    vector<pair<char, int>> charStore;
    for (int i = 0; i < n; i++)
    {
      if (s[i] >= mn && s[i] <= mx)
      {
        charStore.push_back({s[i], i});
      }
    }

    sort(charStore.begin(), charStore.end(), [&](pair<char, int> a, pair<char, int> b)
         { return a.second < b.second; });

    if (charStore.size() > 2)
    {
      sort(charStore.begin() + 1, charStore.begin() + charStore.size() - 1, [&](pair<char, int> a, pair<char, int> b) {
        if(s[0]>s[n-1]){
          return a.first>b.first;
        }
        return a.first<b.first; });
    }

    vector<int> ans;
    ll mov = 0;

    ans.push_back(1);

    for (int i = 1; i < charStore.size(); i++)
    {
      mov += abs(charStore[i - 1].first - charStore[i].first);
      ans.push_back(charStore[i].second+1);
    }

    cout << mov << " " << ans.size() << endl;
    for(int ind: ans)
      cout << ind << " ";

    cout << endl;
  }
  return 0;
}