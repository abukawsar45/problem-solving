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
    vector<int> v(n);
    for (int &x : v)
      cin >> x;

    set<int> st;
    int pr = n; 

    for (int i = n - 1; i >= 0; i--)
    {
      if (st.count(v[i]))
        break; 
      st.insert(v[i]);
      pr = i;
      // cout << "pr " << i << endl;
    }

    cout << pr << '\n'; // The length of the prefix to remove.
  }

  return 0;
}
