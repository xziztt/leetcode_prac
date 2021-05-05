#include<bits/stdc++.h>
using namespace std;
bool checkSubstring(string a,string b){

       int n1 = a.length();
       int n2 = b.length();
       int i=0;

       int flag = 0;
       int temp = 0;
       int count;
       if(n1 < n2){
           return false;
       }

       while(i < n1){

           if(a[i] == b[0]){
               cout<<"found"<<i<<"\n";
               temp = i+1;
               count = 1;
               for(int k = 1;k < n2;k++){
                   if(a[temp] == b[k]){
                       count++;
                   }
                   temp++;
               }
               cout<<"count"<<count<<"\n";
               if(count == b.length()){
                   cout<<"\n"<<"YES FOUND";
                   return true;
               }
               else{
                   return false;
               }
           }
           i++;
       }
       return false;

   }
int main(){
  cout<<checkSubstring("abcdabcdabcd","cdabcdab");
}
