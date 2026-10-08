class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int s=0;
        vector<int> v1;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            v1.push_back(s);


        }
        return v1;
        
    }
};