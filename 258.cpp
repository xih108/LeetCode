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
