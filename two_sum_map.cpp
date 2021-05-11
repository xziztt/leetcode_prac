class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::vector<int> result = {-1,-1};

	std::unordered_map<int,int> umap;
	for(int i = 0;i < nums.size();i++){

		int difference  = target - nums[i];

		if(umap.find(difference)!=umap.end()){


			result[0] = i;
			result[1] = umap.find(difference)->second;

			return result;


		}

		umap[nums[i]] = i;
	}

	return result;
        
    }
};