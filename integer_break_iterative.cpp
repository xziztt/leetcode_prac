class Solution {
public:
    int integerBreak(int n) {
        int product = 1;
        if(n == 2)
            return 1;
        if(n == 3)
            return 2;
        if(n == 4)
            return 4;
        while(n > 4){

            product *= 3;
            n -= 3;

        }
        product *= n;
        return product;

    }
};
