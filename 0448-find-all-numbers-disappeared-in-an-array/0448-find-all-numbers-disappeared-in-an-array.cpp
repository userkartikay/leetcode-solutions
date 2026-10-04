class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v1;
        for(auto x:nums){
            mp[x]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()){
                v1.push_back(i);
            }

        }
        return v1;
        
    }
};