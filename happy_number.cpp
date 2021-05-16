/*using floyd's cycle detection */

class Solution {
public:

    int returnSum(int num){
        int sum = 0;
        while(num > 0){
            int temp =  num%10;
            num/=10;
            sum += temp*temp;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n,fast = n;
        do{
            slow = returnSum(slow);
            fast = returnSum(fast);
            fast = returnSum(fast);
            if(fast == 1)return true;
        }while(fast!=slow);
        return false;
    }
};
