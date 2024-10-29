#include <bits/stdc++.h>
using namespace std;

void solve()
{
  string str;
  cin >> str;
  int lowercaseCount = 0, uppercaseCount = 0;
  deque<char> result;

  for (int i = str.size() - 1; i >= 0; i--)
  {
    if (str[i] == 'B')
    {
      uppercaseCount++;
    }
    else if (str[i] == 'b')
    {
      lowercaseCount++;
    }
    else if (islower(str[i]) && lowercaseCount > 0)
    {
      lowercaseCount--;
    }
    else if (isupper(str[i]) && uppercaseCount > 0)
    {
      uppercaseCount--;
    }
    else
    {
      result.push_front(str[i]);
      cout<<"else - "<< str[i]<<endl;
    }
  }

  for (char ch : result)
  {
    cout << ch;
  }
  cout << endl;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
