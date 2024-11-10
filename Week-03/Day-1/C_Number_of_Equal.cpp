#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> v(n + 1), v2(m + 1);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  for (int i = 0; i < m; i++)
    cin >> v2[i];

  int l = 0, r = 0;
  long long ans = 0;
  while (l<n && r<m)
  {
    long long cur = v[l];
    int cnt1 = 0, cnt2 = 0;
    while (l < n && v[l] == cur)
    {
      l++;
      cnt1++;
    }
    while(r<m && v2[r] < cur){
      r++;
    }
    while (r < m && v2[r] == cur)
    {
      r++;
      cnt2++;
    }
    ans += (1LL * cnt1 * cnt2);
    
  }
  // for (int i = 1; r; i++)
  // {
  //   for (int j = 1; j <= m; j++)
  //   {
  //     if(v[i] == v2[j])cnt++;
  //   }

  // }
  cout << ans << "\n";

  return 0;
}