class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v1;
        for(int x:nums){
            v1.push_back(nums[x]);
        }
        return v1;
    }
};