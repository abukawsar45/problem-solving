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
    if(n%2  ==0){
      cout<<"YES"<<endl;
      int mid = n/2;
      for(int i=0;i<mid;i++)
        cout << char('A' + i) << char('A' + i);
      cout<<endl;
    }
    else cout<<"NO"<<endl;
  }
  
  return 0;
}