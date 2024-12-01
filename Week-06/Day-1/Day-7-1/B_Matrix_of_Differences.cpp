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

    int matrix[n][n];

    int l = 1, r = n * n;

    for (int i = 0; i < n; i++)
    {
      bool flag = true;
      if (i % 2 == 0)
      {
        for (int j = 0; j < n; j++)
        {

          if (j % 2 == 0)
          {

            matrix[i][j] = r--;
          }
          else
          {
            matrix[i][j] = l++;
          }
        }
      }
      else
      {
        for (int j = n - 1; j >= 0; j--)
        {

          if (j % 2 == 0)
          {

            matrix[i][j] = l++;
          }
          else
          {

            matrix[i][j] = r--;
          }
        }
      }
      // cout << '\n';
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << matrix[i][j] << " ";
      }
      cout << "\n";
    }
  }
  return 0;
}