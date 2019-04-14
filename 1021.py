class Solution:
    def removeOuterParentheses(self, S: str) -> str:
        balance = 0
        h = 0
        l = 0
        ans = ""
        for i in range(len(S)):
            if (S[i] == "("):
                balance += 1
            if (S[i] == ")"):
                balance += -1
            if (balance == 0):
                ans += S[h+1:l] 
                h = l+1    
                
            l += 1
        return ans 
