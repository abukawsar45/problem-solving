#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  vector<int> v;
  vector<int> v2;
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

  // for (int val : v)
  // {
  //   cout << val << " ";
  // }

  vector<int> ans;
  int l = 0, r = 0;
  while (ans.size() != n + m)
  {
    if (l < n && v[l] < v2[r])
    {
      // cout << "  1st if -- line 35" << endl;
      // cout<<l<< " "<<r<< endl;

      ans.push_back(v[l]);
      l++;
    }
    else if (l < n && r < m && v[l] == v2[r])
    {
      // cout << "  2nd if -- line 41" << endl;
      // cout<<l<< " "<<r<< endl;
      ans.push_back(v[l]);
      ans.push_back(v2[r]);
      l++;
      r++;
    }
    else if (l < n && r < m && v[l] > v2[r])
    {
      // cout << "  3rd if -- line 48" << endl;
      // cout<<l<< " "<<r<< endl;
      ans.push_back(v2[r]);
      r++;
    }
    else if (l < n)
    {
      // cout << "  4rd if -- line 53" << endl;
      // cout<<l<< " "<<r<< endl;
      ans.push_back(v[l]);
      l++;
    }
    else if (r < m)
    {
      // cout << "  5th if -- line 58" << endl;
      // cout<<l<< " "<<r<< endl;
      ans.push_back(v2[r]);
      r++;
    }
  }
  for (int val : ans)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}