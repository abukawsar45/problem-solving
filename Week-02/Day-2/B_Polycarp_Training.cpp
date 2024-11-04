#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  multiset<int> mlst;
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    mlst.insert(x);
  }

  int cnt = 0;
  // map<int, int> mp;
  for (int i = 1; i <= n; i++)
  {
    auto it = mlst.lower_bound(i);
    if (it != mlst.end())
    {
      cnt++;
      mlst.erase(it);
    }
  }
  cout << cnt << '\n';

  return 0;
}