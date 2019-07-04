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
