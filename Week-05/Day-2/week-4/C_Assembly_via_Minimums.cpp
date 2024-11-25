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
    int m = (n * n - n) / 2;
    // cout<<"m = "<<m<<endl; 
    vector<int> b(m), a(n);
    for (int i = 0; i < m; i++){
      cin>>b[i];
    }

    sort(b.begin(), b.end());
    
    int x = 1, ind = 0;
    int fromBtoA = n - x;
   
    
    while(n-x>0){
      a[ind++] = b[fromBtoA-1];
      x++;
      fromBtoA += n - x;
      // cout << "fromBtoA= " << fromBtoA << endl;
    }
    a[n - 1] = 1000000000;
    for(int i = 0; i < n; i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}