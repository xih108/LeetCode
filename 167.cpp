class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::map<int,int> map1;
        vector<int> ans;
        for (int i = 0;i<size(numbers);i++){
           
            int b = target - numbers[i];
            if (map1.find(numbers[i])!= map1.end()){
                int a = map1.find(numbers[i])->second;
                ans.push_back(a+1);
                ans.push_back(i+1);
                return ans;
            }
            else{
                map1.insert(pair(b,i));
            }
              
        }
         ans.push_back(0);
            ans.push_back(0);
            return ans;
        
    }
};
