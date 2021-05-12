class Solution {
public:
    int findSum(int num){
        int temp,sum = 0;
        while(num != 0){
            temp = num%10;
            sum += temp;
            num = num/10;
            
        }
        return sum;
    }
    int addDigits(int num) {
        while(true){
            num = findSum(num);
            if(num/10 == 0){
               break; 
            }
        }
        return num;
    }
};