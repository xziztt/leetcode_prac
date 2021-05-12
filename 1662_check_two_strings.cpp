class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "",s2 = "";
        for(int i = 0;i < word1.size();i++){
            s1+=word1[i];
        }
        for(int j = 0;j < word2.size();j++){
            s2+=word2[j];
        }
        if(s1 == s2){
            return true;
        }
        
        return false;
    }
};