#include<bits/stdc++.h>
using namespace std;

void solve(std::string jewels,std::string stones){
  int count = 0;
  unordered_map<char,int> umap;
  for(int i = 0;i < jewels.length();i++){

    umap.insert(jewels[i],1);

  }

  for(int i = 0;i < stones.length();i++){
    if(umap.find(stones[i]) != umap.end()){
      count++;

    }
  }
  return count;
}

int main(){

  std::string jewels = "abcd";
  std::string stones = "abcd";
  solve(jewels,stones);
  return 0;
}
