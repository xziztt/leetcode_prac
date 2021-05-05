#include<bits/stdc++.h>
using namespace std;

int getSubstringIndex(string a,string b){
  int n1 = a.length();
  int n2 = b.length();
  int i = 0;
  while(i < n1){
    int count = 0,ind = 0;
    for(int j = i;j < n1;j++){
      if(b[ind] == a[j]){
        count++;
      }else{
        break;
      }
      ind++;
    }
    if(count == n2){
      return i;
    }
    i++;
  }
  return -1;
}

int main(){
  cout<<getSubstringIndex("abcdabcdabcd","bcdabcd");
}
