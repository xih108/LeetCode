// 172. Factorial Trailing Zeroes
// Given an integer n, return the number of trailing zeroes in n!.

// Example 1:

// Input: 3
// Output: 0
// Explanation: 3! = 6, no trailing zero.
// Example 2:

// Input: 5
// Output: 1
// Explanation: 5! = 120, one trailing zero.


// This can be converted to how many 5 does this number has , how many five does the result of it divides 5 has.
// ex.10  5 10 --> 2
// ex.25  5 10 15 20 25 --> 25/5 = 5  5/5 = 1 --> 6




class Solution {
public:
    int trailingZeroes(int n) {
       int ans  = 0;
       while(n){
          n = n/5;
          ans += n;
       }
        
        return ans;
        
    }
};      
