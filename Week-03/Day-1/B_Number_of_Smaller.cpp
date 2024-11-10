#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> v, v2;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }
  for (int i = 0; i < m; i++)
  {
    int x;
    cin >> x;
    v2.push_back(x);
  }
  vector<int> ans;
  int l = 0, r = 0;
  int cnt = 0;
  for (int i = 0; r != m ; i++)
  {
    if (l<n && v[l] < v2[r])
    {
      // cout << "If " << endl;
      l++, cnt++;
      // cout<<l<<endl;
    }
    else
    {
      // cout << "Else " << endl;
      r++;
      ans.push_back(cnt);
    }
    // if (v[l] >= v2[r])
    // {
    // }
    
  }

  for (int val : ans)
    cout << val << " ";

  cout << endl;

  return 0;
}