// 67.Add Binary
// Given two binary strings, return their sum (also a binary string).

// The input strings are both non-empty and contains only characters 1 or 0.

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"


//add the carry bit with each bit from a and b with a difference to '0', the new carry is sum / 2, the ans bit is sum % 2 + '0'.
//keep doing this until one of the string has no more char. Then do the same thing for the longer string.
// At last, add the carry bit at the front if it is 1.


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
