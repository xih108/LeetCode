class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        set<char> set1;
        int s1 = s.size();
        int t1 = t.size();
        
        if (s1 != t1) {
            return false;
        }
        while(s1 && t1){
            if (map1.find(s[s1-1]) == map1.end()){
                 map1[s[s1-1]] = t[t1-1];
                 if(set1.find(t[t1-1]) != set1.end()){
                     return false;
                 }
                 set1.insert(t[t1-1]);
                
            }
            if (map1[s[s1-1]] != t[t1-1] ){
                return false;
            }
            s1--;
            t1--;
        }
        return true;
    }
};
