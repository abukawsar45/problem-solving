

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution
{
public:
  long long maximumSumSubarray(vector<ll> &arr, int k)
  {
    // code here
    int n = arr.size(), l = 0, r = 0;
    ll ans = 0, sum = 0;
    while (r < n)
    {
      sum += arr[r];
      if (r - l + 1 == k)
      {
        ans = max(ans, sum);
        sum -= arr[l];
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
  vector<ll> arr;
  for (int i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    arr.push_back(x);
  }
  int k;
  cin >> k;
  Solution sol;
  ll result = sol.maximumSumSubarray(arr, k);
  cout << result << endl;

  return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int n;
//   cin >> n;
//   vector<ll> arr;
//   ll totalSum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     ll x;
//     cin >> x;
//     arr.push_back(x);
//     totalSum += x;
//   }
//   int k;
//   cin >> k;
//   ll sum = 0;
//   int st = -1, lst = -1;
//   if (k == 1)
//   {
//     auto mx = max_element(arr.begin(), arr.end());
//     cout << *mx << "\n";
//     return 0;
//   }
//   else if (k == n)
//   {
//     cout << totalSum << "\n";
//     return 0;
//   }
//   else
//   {
//     ll cur = 0;
//     int start = n - k;
//     for (int i = 0; i <= n - k; i++)
//     {
//       cur = arr[i];
//       // cout<<"i " <<i << " " <<arr[i]<<endl;
//       for (int j = i + 1; j < i+k; j++)
//       {
//       // cout<<"j " <<j << " " <<arr[j] << " " <<i+k<<endl;
//         cur += arr[j];
//         // cout<<"cur " <<cur<<endl;
//       if(sum >= cur){
//         st = i;
//         lst = j;
//       }
//       }
//       // cout<<"done "<<cur<< endl;
//       sum = max(sum, cur);
//       cur = 0;
//     }
//   }
//   // cout<<st<<" "<< lst<<endl;
//   cout << sum << endl;
//   return 0;
// }