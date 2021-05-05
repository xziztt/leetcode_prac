class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0){
            return 0;
        }
        int startAddress = -1;
        int j = 0;
        int flag = 0;
        int temp;
        int k = 0;
        for(int i = 0;i < haystack.length();i++){
            if(haystack[i] == needle[j]){
                startAddress = i;
                temp = i;
               while(k < needle.length()){
                   if(haystack[temp] != needle[k]){
                       flag = 1;
                       break;
                   }
                   k++;temp++;
               }
                if(flag == 0){
                    return startAddress;
                }
                else{
                    k = 0;
                    j = 0;
                    startAddress = -1;
                    flag = 0;
                }
            }
        }

        return startAddress;

    }
};
