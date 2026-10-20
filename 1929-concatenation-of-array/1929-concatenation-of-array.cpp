class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v1;
        v1.reserve(nums.size()*2);
        for(auto x:nums){
            v1.push_back(x);
        }
        for(auto x:nums){
            v1.push_back(x);
        }
        return v1;

    }
};