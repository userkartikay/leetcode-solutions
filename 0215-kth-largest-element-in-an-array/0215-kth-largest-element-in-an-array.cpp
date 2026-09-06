class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(k>nums.size()){
            return -1;
        }
        int a=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(a==k){
                return nums[i];
            }
            a++;
        }
        return nums[0];
    }
};