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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> h[i];

    vector<vector<int>> groups;
    vector<int> currentGroup = {0};
    for (int i = 1; i < n; i++)
    {
      if (h[i - 1] % h[i] == 0)
      {
        currentGroup.push_back(i);
      }
      else
      {
        groups.push_back(currentGroup);
        currentGroup = {i};
      }
    }
    groups.push_back(currentGroup);

    int maxLength = 0;

    for (vector<int> group : groups)
    {
      ll currSum = 0;
      int l = 0, r = 0;
      while (r < group.size())
      {
        currSum += a[group[r]];
        while (currSum > k && l <= r)
        {
          currSum -= a[group[l]];
          l++;
        }
        maxLength = max(maxLength, r - l + 1);
        r++;
      }
    }

    cout << maxLength << "\n";
  }

  return 0;
}
