#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  
  int s = 0;
  int assume = 0;
  for (int i = 1;; i++)
  {
    s = c * i;
    if (s >= a && s <= b)
    {
      assume = 1;
      break;
    }
    else if(s>b)break;
  }

  if (assume)
  {
    cout << s << endl;
  }
  else
  {
    cout << -1 << endl;
  }

  return 0;
}
