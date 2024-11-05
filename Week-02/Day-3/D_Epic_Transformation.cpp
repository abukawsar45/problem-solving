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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      mp[x]++;
    }

    priority_queue<int> pq;

    // for (pair<int, int> x : mp)
    for (auto [x, y] : mp)
    {
      //   cout << x.first << " " << x.second << endl;
      // cout << x << " " <<y << endl;
      pq.push(y);
    }

    while (!pq.empty())
    {
      // cout << pq.top() << endl;
      if (pq.size() < 2)
        break;
      int x = pq.top();
      pq.pop();
      int y = pq.top();
      pq.pop();
      x--;
      y--;
      if (x > 0)
        pq.push(x);
      if (y > 0)
        pq.push(y);
    }

    int ans = 0;
    if(pq.empty())cout<<0<<endl;
    else {
      while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}