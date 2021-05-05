#include<bits/stdc++.h>
using namespace std;

int main(int n){ //n is the size

  vector<vector<int> dp(n+!,vector<int>(5));
  for(int i = 1;i <= n;i++){
    for(int j = 1;j <=5;j++){
      dp[i][j] = (i>1?dp[i-1][j]:1) + dp[i][j-1];
    }

  }

  return dp[n][5];

}
