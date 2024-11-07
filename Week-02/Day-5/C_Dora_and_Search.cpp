// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;
//   while (t--)
//   {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//       cin >> v[i];
//     }

//     int l = 0, r = n - 1;

//     while (l + 1 < r)
//     {
//       int sub_min = *min_element(v.begin() + l, v.begin() + r + 1);
//       int sub_max = *max_element(v.begin() + l, v.begin() + r + 1);

//       if (v[l] != sub_min && v[l] != sub_max && v[r] != sub_min && v[r] != sub_max)
//       {
//         cout << l + 1 << " " << r + 1 << "\n";
//         goto next_case;
//       }

//       // Move pointers inward
//       if (v[l] == sub_min || v[l] == sub_max)
//         l++;
//       else if (v[r] == sub_min || v[r] == sub_max)
//         r--;
//       else
//         break;
//     }

//     // If no valid segment is found
//     cout << "-1\n";
//   next_case:;
//   }

//   return 0;
// }
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

    map<int, int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v[i] = x;
    }

    int l = 0, r = n - 1;
    bool found = false;

    int sub_min = 1, sub_max = n;
    while (l + 1 < r)
    {

      // for (int i = l; i <= r; i++)
      // {
      //   sub_min = min(sub_min, v[i]);
      //   sub_max = max(sub_max, v[i]);
      // }

      if (v[l] != sub_min && v[l] != sub_max && v[r] != sub_min && v[r] != sub_max)
      {
        cout << l + 1 << " " << r + 1 << "\n";
        // cout << "L- " << l << " R- " << r << " " << endl;
        found = true;
        break;
      }

      if (v[l] == sub_min)
      {
        sub_min++;
        l++;
      }
      else if (v[l] == sub_max)
      {
        l++;
        sub_max--;
      }
      else if (v[r] == sub_min)
      {
        sub_min++;
        r--;
      }
      else if (v[r] == sub_max)
      {
        r--;
        sub_max--;
      }
    }

    if (!found)
      cout << "-1\n";
  }

  return 0;
}
