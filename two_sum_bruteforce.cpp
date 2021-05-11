class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int found = 0;
        for(int i = 0;i < nums.size();i++){
            for(int j = i+1;j < nums.size();j++){
                
                if((target - nums[i]) == nums[j]){
                    ans[0] = i;
                    ans[1] = j;          
                    cout<<i<<j;
                    found = 1;
                    break;
                
            }
                
        }
            if(found == 1){
                    break;
                }
        }
        
        return ans;
        
        
    }
};