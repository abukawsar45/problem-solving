
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> ans;
queue<int> q;
class Solution
{
public:
  vector<int> FirstNegativeInteger(vector<int> &arr, int k)
  {
    int n = arr.size();
    int l = 0, r = 0;
    while (r < n)
    {
      if (arr[r] < 0)
      {
        q.push(arr[r]);
      }
      if (r - l + 1 == k)
      {
        if (!q.empty())
        {
          ans.push_back(q.front());
          if (arr[l] == q.front())
            q.pop();
        }
        else if (q.empty())
        {
          ans.push_back(0);
        }
        l++;
      }
      r++;
    }
    return ans;
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  int k;
  cin >> k;

  // for(int val: arr){
  //   cout<<val<<" ";
  // }
  // cout<<endl;
  // cout<<k<<" kk"<<endl;


  Solution sol;
  vector<int> result = sol.FirstNegativeInteger(arr, k);
  for (int val : result)
  {
    cout << val << " ";
  }
  cout << '\n';
  return 0;
}
