class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp.erase(nums[i]);
            }
            else{
                mp[nums[i]]++;
            }
        }
        return mp.begin()->first;
    }
};