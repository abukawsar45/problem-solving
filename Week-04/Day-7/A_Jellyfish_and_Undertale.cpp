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
    int a, b, n;
    cin >> a >> b >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    int l = 0;
    ll totalTime = 0;

    ll initTime = b;
    if (initTime > 1)
    {
      totalTime += initTime - 1;
      initTime = 1;
    }
    while (l < n)
    {
      initTime = min(a, v[l] + 1);
      if (initTime > 1)
      {
        totalTime += initTime - 1;
        initTime = 1;
      }
      l++;
    }
    cout<<totalTime+1<<"\n";
  }
  return 0;
}