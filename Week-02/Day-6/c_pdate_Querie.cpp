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
    int n, u;
    cin >> n >> u;

    string s;
    cin >> s;

    vector<int> upIndex(n + 1, -1);
    for (int i = 0; i < u; i++)
    {
      int x;
      cin >> x;
      x--;
      upIndex[x] = x;
    }
    //  for(int i = 0; i < upIndex.size(); i++){
    //   cout<<i<<" --- "<<upIndex[i]<<endl;
    //  }

    string replaceWord;
    cin >> replaceWord;
    sort(replaceWord.begin(), replaceWord.end());
    // cout<<replaceWord<<endl;
    int in = 0;
    for (int i = 0; i < n; i++)
    {
      if (upIndex[i] == i)
      {
        s[i] = replaceWord[in];
        in++;
      }
    }

    // for(int val: upIndex)
    //   cout << val << " ";

    cout << s << endl;
  }

  return 0;
}