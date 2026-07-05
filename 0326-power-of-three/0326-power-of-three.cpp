class Solution {
public:
    bool solve(int n){
        if(n==1){
            return true;
        }
        if(n<1 || n%3 != 0){
            return false;
        }
        return solve(n/3);
    }


    bool isPowerOfThree(int n) {
        bool b=solve(n);
        return b;
    }
};