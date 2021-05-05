/* 

array = 1 2 3 4 5 6 7
rev   = 7 6 5 4 3 2 1

so reverse from 0 to k-1 then k to last element

*/



class Solution {
public:
    
    void reverseArray(vector<int> &v,int ind1,int ind2){ //rotate from ind1 to ind2
        
    if(v.size() == 1 || v.size() == 0){
        return;
    }

	int temp;
	while(ind1 < ind2){

		temp = v[ind1];
		v[ind1] = v[ind2];
		v[ind2] = temp;

		ind1 ++;ind2--;
	}
}
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();
        
        reverseArray(nums,0,nums.size()-1);
        reverseArray(nums,0,k-1);             //or use builtin function called reverse
        reverseArray(nums,k,nums.size()-1);
        
        
        
        
        
    }
};