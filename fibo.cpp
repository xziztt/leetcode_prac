#include<bits/stdc++.h>
#include<vector>
using namespace std;
std::vector<int> dp(10,-1);

int fibo(int n){
  //cout<<n;
  if(dp[n] != -1){
    return dp[n];
  }
  else{
    dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
  }
}

int main(){
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 1;
  fibo(7);
  for(int i = 0;i <= 7;i++){
    cout<<dp[i]<<" ";
  }
  return 0;
}
