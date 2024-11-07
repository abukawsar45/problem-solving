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
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 1; i <= n; i++)
      pq.push(i);

    vector<pair<int, int>> ans;
    while (pq.size() > 1)
    {
      float x = pq.top();
      pq.pop();
      float y = pq.top();
      pq.pop();
      float z = (x+y+1)/2;
      ans.push_back({x, y});
      pq.push(z);
    }

    
      cout << pq.top() << endl;
    for (auto [x, y] : ans)
      cout << x << " " << y << endl;
  }
  return 0;
}
