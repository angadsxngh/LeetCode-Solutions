class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int rem;
        long int reversed=0;

        if(x<0){
            return false;
        }

        while(n != 0){
            rem = n % 10;
            reversed = reversed * 10 + rem;
            n /= 10;
        }


        if(x ==  reversed){
            return true;
        }
        return false;
    }
};