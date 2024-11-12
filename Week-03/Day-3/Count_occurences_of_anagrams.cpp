#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int search(string pat, string txt)
  {
    vector<int> patFr(256, 0);
    vector<int> txtFr(256, 0);
    int n = pat.size();
    int m = txt.size();

    for (int i = 0; i < n; i++)
    {
      patFr[pat[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
      txtFr[txt[i]]++;
    }

    int cnt = 0;  
    if (patFr == txtFr)
    {
      cnt++;
    }

    int i = 0, j = n;
    while (j < m)
    {
      txtFr[txt[j]]++;
      txtFr[txt[i]]--;
     
      if (patFr == txtFr)
      {

        cnt++;
      }
      i++;
      j++;
    }

    return cnt; 
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string txt; // Text
  string pat; // Pattern
  cin >> txt;
  cin >> pat;

  Solution sol;
  int result = sol.search(pat, txt);
  cout << result << endl;

  return 0;
}
