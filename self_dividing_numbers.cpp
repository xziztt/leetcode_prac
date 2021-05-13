class Solution {
public:
    bool canDivide(int n){

        int number = n;
        while(n > 0){
            if(n % 10 == 0){
                return false;
            }
            int temp = n % 10;
            if(number % temp != 0){
                return false;
            }
            n/=10;
        }

        return true;

    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> numbers;
        while(left <= right){
            if(canDivide(left) == true){
                numbers.push_back(left);
            }
            left++;
        }

        return numbers;

    }
};
