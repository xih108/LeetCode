// 205. Isomorphic Strings
// Given two strings s and t, determine if they are isomorphic.
// Two strings are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.
// Example 1:

// Input: s = "egg", t = "add"
// Output: true
// Example 2:

// Input: s = "foo", t = "bar"
// Output: false
// Example 3:

// Input: s = "paper", t = "title"
// Output: true


//Use an unorderedmap as a hashmap, each char corresponds to a unique char (no duplicates for the value implemented by using set).
//If the length of the two strings not equal or the mapping doesn't match, return false, else return true.


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
