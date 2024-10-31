#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  sort(s.begin(), s.end());
  // cout << s << endl;
  s.erase(unique(s.begin(), s.end()), s.end());
  // cout << s << endl;
  int arr[26] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    // cout<<arr[i]<<endl;
    int k = s[i] - 'a';
    arr[k]++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (arr[i] == 0)
    {
      cout << char(i + 'a') << endl;
      return 0;
      break;
      
    }
  }
  cout << "None" << endl;

  return 0;
}