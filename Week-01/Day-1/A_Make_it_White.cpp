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

    string s;
    cin >> s;
    int stIndex=0;
    int lsIndex=0;
    for (int i = 0; i < n; i++)
    {
      if(s[i] == 'B')
        {
          stIndex = i;
          // cout << "stIndex " << stIndex << "\n";
          break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
      if(s[i] == 'B')
        {lsIndex = n-1-i;
          // cout << "lsIndex " << lsIndex << "\n";
          break;
        }
    }
    int ans = n-stIndex - lsIndex;
    cout << ans << "\n";
    
  }
  
  return 0;
}