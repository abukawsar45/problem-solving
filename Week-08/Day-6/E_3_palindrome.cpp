#include <iostream>
using namespace std;

void solve()
{
  int n;
  cin >> n;

  
  string pattern = "aabb";
  string result;

  
  while (result.size() < n)
  {
    result += pattern;
  }

  
  result = result.substr(0, n);

  cout << result << endl;
}

int main()
{
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}
