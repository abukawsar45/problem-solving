#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin>>n;
  deque<int> dq(n);
  for(int i=0; i<n; i++)
    cin>>dq[i];

  int player1 = 0, player2 = 0;
  bool isFirst = true;
  while(!dq.empty()){
    int maxNum = max(dq.front(),dq.back());
    
    if(isFirst){
      player1 += maxNum;
    }
    else{
      player2 += maxNum;
    }
    if (maxNum==dq.front())
    {
      dq.pop_front();
    }
    else dq.pop_back();
    
    isFirst =!isFirst;
  }

  cout<<player1<<" "<<player2<<endl;
  return 0;
}