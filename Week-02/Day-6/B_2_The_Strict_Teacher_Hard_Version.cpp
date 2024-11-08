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
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> teachers(m);
    for (int i = 0; i < m; i++)
    {
      cin >> teachers[i];
    }

    sort(teachers.begin(), teachers.end());

    while (q--)
    {
      int student;
      cin >> student;

      if (student < teachers[0])
      {
        cout << teachers[0] - 1 << endl;
      }

      else if (student > teachers[m - 1])
      {
        cout << n - teachers[m - 1] << endl;
      }

      else
      {
        auto it = lower_bound(teachers.begin(), teachers.end(), student);
        auto jt = it;
        jt--;

        int left = *jt;
        int right = *it;
        int half = (left + right) / 2;

        int ans = min(abs(half - left), abs(half - right));

        cout << ans << endl;
      }
    }
  }

  return 0;
}
