class Solution {
public:
    int countPrimes(int n) {

        vector<bool> isPrime;

        if(n == 0){
            return 0;
        }

        for(int i = 0;i < n;i++){

            isPrime.push_back(true);

        }

        isPrime[0] = false;
        isPrime[1] = false;

        for(int i = 2;i < n;i++){

            if(isPrime[i] == true){
                for(int j = 2;j*i< n;j++){
                    isPrime[i * j] = false;
                }
            }
        }
        int count = 0;
        for(int j = 0;j < n;j++){
            if(isPrime[j]){
                count++;
            }
        }



        return count;

    }
};
