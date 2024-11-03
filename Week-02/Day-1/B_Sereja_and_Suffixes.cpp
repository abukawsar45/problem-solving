#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> v(n+1);
  for (int i = 1; i <= n; i++)
  {
    cin >> v[i];
  }

  set<int> distinctV;
  vector<int> cnt(n+1);
  
  for (int i = n; i >= 1; i--)
  {
     distinctV.insert(v[i]);
     cnt[i]=distinctV.size();
  }
  

  for (int j = 1; j <= m; j++)
  {
    int ind;
    cin >> ind;
    cout << cnt[ind] << '\n';
  }

  return 0;
}
