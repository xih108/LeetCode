// 12. Integer to Roman
// Medium

// 614

// 1933

// Favorite

// Share
// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, two is written as II in Roman numeral, just two one's added together. Twelve is written as, XII, which is simply X + II. The number twenty seven is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given an integer, convert it to a roman numeral. Input is guaranteed to be within the range from 1 to 3999.

//use a map with a descending order, everytime match the largest number and its corresponding symbol. 

class Solution {
public:
    string intToRoman(int num) {
       map<int,string,std::greater<int>> map1;
      
       map1.insert(pair<int,string>(1000,"M"));
       map1.insert(pair<int,string>(900,"CM"));
       map1.insert(pair<int,string>(500,"D"));
       map1.insert(pair<int,string>(400,"CD"));
       map1.insert(pair<int,string>(100,"C"));
       map1.insert(pair<int,string>(90,"XC"));
       map1.insert(pair<int,string>(50,"L"));
       map1.insert(pair<int,string>(40,"XL"));
       map1.insert(pair<int,string>(10,"X"));
       map1.insert(pair<int,string>(9,"IX"));
       map1.insert(pair<int,string>(5,"V"));
       map1.insert(pair<int,string>(4,"IV"));
       map1.insert(pair<int,string>(1,"I"));
        
       map<int,string>::iterator itr; 
       string sym = "";
       itr = map1.begin();
       while(num){
           int a =  itr->first;
           // cout<<a<<endl;
           if (num / a == 0){
               itr++;
           }
           else{
               num -= a;
               sym+= itr->second;
           }
         
      }
        return sym;
    }
};
