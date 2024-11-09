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
    map<char, bool> mp;
    mp.insert({'T', true});
    mp.insert({'i', true});
    mp.insert({'m', true});
    mp.insert({'u', true});
    mp.insert({'r', true});

    string str;
    cin >> str;

    if (n == 5)
    {
      bool assume = true;
      for (int i = 0; i < n; i++)
      {
        // mp.count(str)
        auto it = mp.find(str[i]);

        if (it == mp.end())
        {
          assume = false;
        }
        else
          mp.erase(it);
      }

      // for(auto [x, y]: mp)
      // {
      //   cout << x << " - " << y << endl;
      // }

      if (assume)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
    else
      cout << "NO\n";
  }
  return 0;
}