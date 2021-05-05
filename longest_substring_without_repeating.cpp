class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l = 0,result = 0;
	std::unordered_map<int,int> umap;

	for(int r = 0;r < s.size();r++){

		if(umap[s[r]]){
			while(s[l] != s[r])
				umap[s[l++]] = 0;
				l++;
		}

		result = max(result,r-l+1);
		umap[s[r]] = 1;



	}

	return result;
        
    }
};