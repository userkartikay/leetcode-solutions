class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> v1;
        for(int i=0;i<numbers.size();i++){
            if(mp.find(numbers[i])!=mp.end()){
                return {mp[numbers[i]]+1,i+1};

            }
            mp[target-numbers[i]]=i;
        }
        return {0+1,1+1};
        
    }
};