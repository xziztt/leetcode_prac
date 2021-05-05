//find largest subarray such that sum = total_sum - X

#include <bits/stdc++.h>

using namespace std;

int minimumWithdrawal(vector<int> ATM,int X){
  int totalSum = 0;
  int start = 0;
  int startIndex = -1;s
  for(int i = 0;i < ATM.size();i++){
    totalSum += ATM[i];
  }
  int neededSum = totalSum - X;
  for(int i = 1;i < ATM.size();i++){
    while(currentSum < neededSum && start < ATM.size() - 1){
      currentSum += ATM[];
      start ++;
      if(currentSum == neededSum){

        startIndex = start;

      }
    }

  }


}
int main(){
    int N;
    cin>>N;
    vector<int> ATM(N);
    for(int j = 0;j < N;j++){
        cin>>ATM[j];
    }
    int X;
    cin>>X;
    int result;
    result = minimumWithdrawal(ATM,X);
    cout<<result;
    return 0;
}
