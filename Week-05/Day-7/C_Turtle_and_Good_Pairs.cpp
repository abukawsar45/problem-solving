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

    vector<pair<int, char>> v(26);
    for (int i = 0; i < 26; i++)
    {
      v[i].second = 'a' + i;
    }

    for (char c : s)
    {
      // cout<<c-'a'<<c<< endl;
      v[c - 'a'].first++;
    }

    sort(v.rbegin(), v.rend());

    string rs(n, ' ');
    int index = 0;

    for (auto [x, y] : v)
      {
        if(x==0){
          break;
        }
        for(int i = 0; i < x; i++){
          if(index >= n)
            index = 1;

          rs[index] = y;
          index += 2;
        }

      }
      
    cout << rs << '\n';
  }
  return 0;
}