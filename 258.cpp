// 258. Add Digits
// Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

// Every time add each digit of the number until it becomes 0, update ans until ans become one digit.

class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        while(true){
            while(num > 0){
                ans = ans+ num % 10;
                num = num/10;
                
            }
            // cout<<ans<<endl;
            if (ans / 10 == 0){
                break;
            }
            num = ans;
            ans = 0;
        }
        return ans;
    }
};
