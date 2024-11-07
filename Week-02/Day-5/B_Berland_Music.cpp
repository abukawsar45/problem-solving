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
    vector<int> v(n);
    string s;

    for (int i = 0; i < n; ++i)
    {
      cin >> v[i];
    }
    cin >> s;

    vector<pair<int, int>> liked, disliked;

    for (int i = 0; i < n; ++i)
    {
      if (s[i] == '1')
        liked.push_back({v[i], i});
      else
        disliked.push_back({v[i], i});
    }

    sort(liked.begin(), liked.end());
    sort(disliked.begin(), disliked.end());

    // cout << "liked" << endl;
    // for (auto [x, y] : liked)
    // {
    //   cout << x << " " << y << endl;
    // }
    // cout << "disliked" << endl;
    // for (auto [x, y] : disliked)
    // {
    //   cout << x << " " << y << endl;
    // }

    vector<int> ans(n);
    int rating = 1;

    for (auto [a, idx] : disliked)
    {
      ans[idx] = rating++;
    }

    for (auto [a, idx] : liked)
    {
      ans[idx] = rating++;
    }

    for (int i = 0; i < n; ++i)
    {
      cout << ans[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
