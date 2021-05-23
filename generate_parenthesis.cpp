class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
        vector<string> outputVec;
        backTrack(outputVec,"",0,0,n);
        return outputVec;
        
    }
    
    void backTrack(vector<string>&outputVec,string currentString,int opening,int closing,int n){
        if(currentString.length() == 2*n){
            outputVec.push_back(currentString);
            return;
        }
        if(opening < n){
            backTrack(outputVec,currentString+"(",opening+1,closing,n);
        }
        if(closing < opening){
            backTrack(outputVec,currentString + ")",opening,closing+1,n);
        }
    }
};
