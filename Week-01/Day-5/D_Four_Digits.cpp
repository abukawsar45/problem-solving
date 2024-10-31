#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  string s = to_string(n);
  int k = s.size();
  // cout<<k<<endl;
  if(k<4){
    for (int i = 4; i > k; i--)
    {
      cout << 0;
    }
    
  }
  cout << s<<endl;

  return 0;
}