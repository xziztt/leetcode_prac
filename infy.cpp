#include <bits/stdc++.h>

using namespace std;

int minimumWithdrawal(vector<int> ATM,int X){
  int i = 0;
  int j = ATM.size() - 1;
  int total;
  int minTransactions = 1000;
  int currentTransactions = 1000;
  while(i < ATM.size() && total <= X){
    total += ATM[i];
    i++;
    currentTransactions++;
  }
  i = i - 1;
  if(total == X && minTransactions < currentTransactions){
    minTransactions = currentTransactions;
  }

  while(true){
    if(total + ATM[j] <= X){
      total += ATM[j];
      j--;
      currentTransactions += 1;
    }
    else if(i >= 0){
      total -= ATM[i];
      i--;
      currentTransactions--;
    }
    else{
      break;
    }
  }

  if(currentTransactions < minTransactions){
    minTransactions = currentTransactions;
  }


  if(currentTransactions <= minTransactions && total == X){
    return minTransactions;
  }
  else{
    return -1;
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
