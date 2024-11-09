#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t; // 1

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
      int b; 
      cin >> b;

      string moves;
      cin >> moves;

      int current = v[i];
      for (char move : moves)
      {
        if (move == 'U')
        {
          // cout << "if current " << current << '\n';
          current = (current - 1 + 10) % 10;
          // cout << "if current " << current << '\n';
        }
        else if (move == 'D')
        {
          // cout << "else current " << current << '\n';
          current = (current + 1) % 10;
          // cout << "else current " << current << '\n';
        }
      }

      v2[i] = current;
    }

    for (int i = 0; i < n; i++)
    {
      cout << v2[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
