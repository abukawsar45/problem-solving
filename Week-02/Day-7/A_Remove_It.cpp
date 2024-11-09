#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,x;
  cin >> n>>x;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    v.push_back(val);
    
  }
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    if(v[i] != x)ans.push_back(v[i]);
    
  }
  for(int value: ans)cout << value << " ";
  cout << "\n";

 
  return 0;
}