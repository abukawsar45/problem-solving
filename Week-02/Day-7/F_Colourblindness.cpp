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
    string s1, s2;
    cin >> s1 >> s2;
    //  cout << s1 << " " << s2 << endl;
    bool assume = false;
    for (int i = 0; i < n; i++)
    {
      if(s1[i] == s2[i]){
        continue;
      }
      else if ((s1[i] == 'B' || s1[i] == 'G') && (s2[i] == 'B' || s2[i] == 'G'))
      {
      // cout<<s1[i] << " "<<s2[i]<<  endl;
        continue;
      }
      else assume = true;
    }
    if (!assume)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}