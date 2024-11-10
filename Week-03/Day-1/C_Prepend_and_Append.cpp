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

    int len = n;
    int mid = (n + 1) / 2;
    int lastIndex = n - 1;
    // cout<<"---- start ----"<<endl;

    for (int i = 0; i < mid; i++)
    {
      if ((s[i] == '0' && s[lastIndex] == '1') || (s[i] == '1' && s[lastIndex] == '0'))
      {

        // cout<<"if "<<len << " " <<lastIndex <<endl;
        len -= 2;
        lastIndex--;
      }
      else
      {
        // cout<<"else "<<len<<endl;
        break;
      }
    }
    cout << len << '\n';
    // cout<<"---- end ----"<<endl;
  }
  return 0;
}