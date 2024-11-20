#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long s;
  cin >> n >> s;
  vector<long long> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long current_sum = 0;
  int l = 0, r = 0;
  long long cnt = 0;

  while (r < n)
  {
    current_sum += a[r];

    while (current_sum >= s)
    {
      cnt += (n - r);
      // cout<<n<<" - "<<r << " ++ "<<n-r <<endl;
      // cout<<l<<" " <<r<<endl;
      current_sum -= a[l];
      l++;
    }
    r++;
  }

  cout << cnt << "\n";

  return 0;
}
