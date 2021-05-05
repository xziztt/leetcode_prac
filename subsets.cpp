#include<bits/stdc++.h>
using namespace std;


/*void printVec(vector<int>&temp){
  for(int i = 0;i < temp.size();i++){
    cout<<temp[i]<<" ";
  }
}*/
vector<vector<int>> subsets;
void findSubset(vector<int>& nums,vector<int>& currentSubset,int i){
  //cout<<"exec";
  //printVec(currentSubset);
  if(i == nums.size()){
    subsets.push_back(currentSubset);
    //cout<<"Retuning";
    return;
  }
  else{
    currentSubset.push_back(nums[i]);
    findSubset(nums,currentSubset,i+1);
    currentSubset.pop_back();
    findSubset(nums,currentSubset,i+1);

  }

}

int  main(){
  vector<int> nums = {1,2,2};
  vector<int> subset;
  findSubset(nums,subset,0);
  //cout<<"done";
  for(int i = 0;i < subsets.size();i++){
    cout<<"{";
    for(int j = 0;j < subsets[i].size();j++){
      cout<<subsets[i][j]<<",";
    }
    cout<<"},";
  }
}
