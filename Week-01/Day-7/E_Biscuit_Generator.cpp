#include <iostream>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, t;
  cin >> a >> b >> t;

  int mxTime = t;

  int intervals = mxTime / a;

  int total_biscuits = intervals * b;

  cout << total_biscuits << endl;

  return 0;
}
