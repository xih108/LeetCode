class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        
        int a1 = a.size();
        int b1 = b.size();
        char c = 0;
        while (a1 && b1){
            char sum = c + (a[a1-1] - '0' ) + (b[b1-1] - '0');
            c = sum / 2;
            ans = string(1,(sum % 2 + '0' )) + ans;
            a1--;
            b1--;
        }
        
        while (a1){
            char sum = c + (a[a1-1] - '0' );
            c = sum / 2;
            ans =string(1,(sum % 2 + '0' )) + ans;
            a1--;
        }
        
        while (b1){
            char sum = c + (b[b1-1] - '0');
            c = sum / 2;
            ans = string(1,(sum % 2 + '0' ))+ ans;
            b1--;
        }
        
        ans = (c?"1":"")+ans;
        return ans;
    
        
    }
};
