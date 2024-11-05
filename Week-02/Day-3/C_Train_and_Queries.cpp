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
//     cin.ignore();
//     int n, k;
//     cin >> n >> k;
//     // cout<<n<<" "<<k<<endl;
//     vector<int> v(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//       cin >> v[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//       // cout << v[i] <<" ";
//     }
//     // cout<<endl;

//     for (int i = 1; i <= k; i++)
//     {
//       bool assume = false;
//       int start, des;
//       cin >> start >> des;
//       // cout<<start<< " "<<des<< endl;
//       auto strtIndex = find(v.begin(), v.end(), start);
//       auto desIndex = find(v.rbegin(), v.rend(), des);
//       int s, d;

//       if (strtIndex != v.end())
//       {
//         s = strtIndex - v.begin();
//         s--;
//         // cout << s << endl;
//       }
//       else
//       {
//         assume = true;
//       }
//       if (desIndex != v.rend())
//       {
//         int dis = desIndex - v.rbegin();
//         d = n - dis - 1;
//         // cout << d << endl;
//       }
//       else
//       {
//         assume = true;
//       }

//       if (assume)
//         cout << "NO" << endl;
//       else
//       {
//         if (d > s)
//           cout << "YES" << endl;
//         else
//           cout << "NO" << endl;
//       }
//       // cout<<start<<" "<<des<<endl;
//     }
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
    cin.ignore();
    int n, k;
    cin >> n >> k;
    // cout<<n<<" "<<k<<endl;
    vector<int> v(n + 1);
    map<int, set<int>> mp;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      mp[x].insert(i);
    }
    // for (auto [x, y]: mp)
    // {
    //   cout << x <<" - ";
    //   for (auto val: y)
    //   {
    //     cout << val << " ";
    //   }
    //   cout << endl;
    // }
    // cout<<endl;

    for (int i = 1; i <= k; i++)
    {
      bool assume = false;
      int l, r;
      cin >> l >> r;
      // cout<<start<< " "<<des<< endl;
      auto strtIndex = find(v.begin(), v.end(), l);
      auto desIndex = find(v.rbegin(), v.rend(), r);
      int s, d;

      if ((mp.find(l)==mp.end()) || (mp.find(r) ==  mp.end()))
      {
        assume = true;
      }
      else
      {
        s = *mp[l].begin();
        d = *mp[r].rbegin();
      }
      
      if (assume)
        cout << "NO" << endl;
      else
      {
        if (d > s)
          cout << "YES" << endl;
        else
          cout << "NO" << endl;
      }
      // cout<<start<<" "<<des<<endl;
    }
  }

  return 0;
}