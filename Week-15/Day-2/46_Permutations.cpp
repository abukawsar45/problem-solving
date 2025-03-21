#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pr pair<int, int>
#define prl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()              \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

using namespace std;
const int mod = 1e9 + 7;

// class Solution
// {
// private:
//   void func(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, int freq[])
//   {
//     if (nums.size() == a.size())
//     {
//       ans.push_back(a);
//       return;
//     }

//     for (int i = 0; i < nums.size(); i++)
//     {
//       if (!freq[i])
//       {
//         a.push_back(nums[i]);
//         freq[i] = 1;
//         func(nums, a, ans, freq);
//         freq[i] = 0;
//         a.pop_back();
//       }
//     }
//   }

// public:
//   vector<vector<int>> permute(vector<int> &nums)
//   {
//     vector<vector<int>> ans;
//     vector<int> a;
//     int freq[nums.size()];
//     for (int i = 0; i < nums.size(); i++)
//     {
//       freq[i] = 0;
//     }
//     func(nums, a, ans, freq);
//     return ans;
//   }
// };

class Solution
{
private:
  void func(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, int freq[])
  {
    if (nums.size() == a.size())
    {
      ans.push_back(a);
      return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
      if (!freq[i])
      {
        a.push_back(nums[i]);
        freq[i] = 1;
        func(nums, a, ans, freq);
        freq[i] = 0;
        a.pop_back();
      }
    }
  }

public:
  vector<vector<int>> permute(vector<int> &nums)
  {
    vector<vector<int>> ans;
    vector<int> a;
    int freq[nums.size()];
    for (int i = 0; i < nums.size(); i++)
    {
      freq[i] = 0;
    }
    func(nums, a, ans, freq);
    return ans;
  }
};

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int &i : v)
    cin >> i;

  Solution sol;
  vector<vector<int>> permutations = sol.permute(v);
  for (auto &perm : permutations)
  {
    for (int num : perm)
      cout << num << " ";
    cout << '\n';
  }
}

int32_t main()
{
  fastread();
  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
