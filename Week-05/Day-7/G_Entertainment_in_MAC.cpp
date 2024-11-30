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
    int sz = s.size();
    char first = s[0];
    char last = s[sz - 1];

    bool flag = false;
    // cout<<first<<" - "<<last<<endl;
    if (first < last)
      cout << s << endl;
    else
    {
      for (int i = 0; i < sz / 2; i++)
      {
        if (s[i] == s[sz - i - 1])
          continue;
        if (s[i] > s[sz - i - 1])
        {
          flag = true;
        }
        else
          break;
      }

      string rev = s;
      reverse(rev.begin(), rev.end());
      if(!flag)cout<<s<<endl;
      else
        cout << rev << s << endl;
    }
  }
  return 0;
}