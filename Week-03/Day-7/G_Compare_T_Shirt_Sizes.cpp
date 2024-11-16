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
    string a, b;
    cin >> a >> b;
    // cout << a << " " << b << endl;
    if (a == b)
    {
      cout << "=" << endl;
    }
    else
    {
      auto forA = a.rbegin();
      auto forB = b.rbegin();
      char aLast = *forA;
      char bLast = *forB;
      int lenA = a.size();
      int lenB = b.size();
      // cout << lenA << " " << lenB << endl;
      if (aLast == bLast)
      {
        if (aLast == 'S')
        {
          if (lenA > lenB)
            cout << "<" << endl;
          else
            cout << ">" << endl;
        }
        else if (aLast == 'L')
        {
          if (lenA > lenB)
            cout << ">" << endl;
          else
            cout << "<" << endl;
        }
      }
      else
      {
        if (aLast == 'S' && bLast == 'L')
        {
          cout << "<" << endl;
        }
        else if (aLast == 'L' && bLast == 'S')
        {
          cout << ">" << endl;
        }
        else if (aLast == 'S' && bLast == 'M')
        {
          cout << "<" << endl;
        }
        else if (aLast == 'M' && bLast == 'S')
        {
          cout << ">" << endl;
        }
        else if (aLast == 'M' && bLast == 'L')
        {
          cout << "<" << endl;
        }
        else if (aLast == 'L' && bLast == 'M')
        {
          cout << ">" << endl;
        }
      }
    }
  }
  return 0;
}