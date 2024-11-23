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

    int oneCnt = 0, zeroCnt = 0;

    
    if (s[0] == '1')
      oneCnt++;
    else
      zeroCnt++;

    for (int i = 1; i < n; i++)
    {
     
      if (s[i] != s[i - 1])
      {
        if (s[i] == '1')
          oneCnt++;
        else
          zeroCnt++;
      }
    }

    // cout << oneCnt << " " << zeroCnt << endl;
    cout << min(oneCnt, zeroCnt) << endl;
  }
  return 0;
}
