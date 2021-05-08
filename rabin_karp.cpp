#include<bits/stdc++.h>
#define d 256
using namespace std;

void rabinKarp(string text,string pattern,int q){
  int m = text.length();
  int n = pattern.length();
  int h = 1;
  for(int i = 0;i < n-1;i++){
    h = (h*d)%q;
  }
  int p = 0;
  int j;
  int t = 0;
  for(int i = 0;i < n;i++){

    p = (d * p + pattern[i])%q;
    t = (d * t + text[i])%q;
  //cout<<p<<" "<<t;
    //std::cout<< '\n';
  }
  //cout<<p<<" "<<t;
  for(int i = 0;i <= m-n;i++){
    //cout<<p<<t;
    //cout<<"here";
    if(p == t){
      //cout<<"equal hashes";
      for(j = 0;j < n;j++){
        if(text[i+j] != pattern[j]){
          break;
        }
        cout<<text[i+j]<<"_"<<pattern[j]<<"\n";
      }
      if(j == n){
        cout<<"found";
        cout<<i;
        return;
      }
    }
      cout<<i;
      if(i <= m-n){
        cout<<"here";
        cout<<"\n";
        cout<<i;
        t = (d *(t - text[i]*h) + text[i + n])%q;
        if(t < 0){
          t+=q;
        }


      }

      std::cout <<'\n';
      cout<<"t "<<t<<"\n";
      cout<<"p "<<p<<"\n";
  }
}

int main(){

  string text = "sadabcsad";
  string pattern = "abc";
  int q = 101;
  rabinKarp(text,pattern,q);

}
