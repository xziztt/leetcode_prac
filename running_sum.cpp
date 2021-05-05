#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
      vector<int> runningVec;
      int temp;
      for(int i = 0;i < nums.size();i++){
        temp += nums[i];
        runningVec.push_back(temp);
      }

      return runningVec;

    }
};

int main(){

  vector<int> nums{1,2,3,4,5,6};
  temp = Solution();
  temp.runningSum(nums);


}
