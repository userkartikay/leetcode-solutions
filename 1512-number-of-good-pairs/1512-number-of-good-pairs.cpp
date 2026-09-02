class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int a=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            a+=mp[nums[i]]-1;

        }
        return a;
    }
};