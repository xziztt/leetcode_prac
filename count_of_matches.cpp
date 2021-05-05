#include<bits/stdc++.h>
using namespace std;
int no_of_matches = 0;

int solve(int n){
  if(n%2 == 0){
    no_of_matches = no_of_matches + n/2;
    n -= n/2;
  }
  else{
    no_of_matches += (n-1)/2;
    n -=(n-1)/2;
  }
}

int main(){
  cin>>n;
  solve(n);
}
