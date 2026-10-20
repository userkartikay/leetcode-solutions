class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v1;
        for(auto x:nums){
            v1.push_back(x);
        }
        for(auto x:nums){
            v1.push_back(x);
        }
        return v1;

    }
};