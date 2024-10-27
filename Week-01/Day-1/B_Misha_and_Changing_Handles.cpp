#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  map<string, string> ans, has;
  while (n--)
  {
    string old, now;
    cin >> old >> now;
    if (has.find(old) != has.end())
    {
      // cout << "if " << n << endl;
      string main = has[old];
      // cout<<"main "<<main << endl;
      ans[main] = now;
      has.erase(old);
      has[now] = main;
      // cout<<"has now "<<has[now] << " : "<< main <<endl;
    }
    else
    {
      // cout << "else " << n << endl;

      ans[old] = now;
      // cout << "ans old " << ans[old] << " : " << now << endl;

      has[now] = old;
      // cout << "has now " << has.first << " : " << old << '\n';
    }
  }
  cout<<ans.size() << endl;
  for (auto [x, y] : ans)
    cout << x << " " << y << endl;
  return 0;
}