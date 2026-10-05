class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=nums.size()-1,l=0,i=0;
        while(i<=r){
            if(nums[i]==1){
                i++;
            }
            else if(nums[i]==0){
                swap(nums[i],nums[l]);
                l++;
                i++;
            }
            else{
                swap(nums[i],nums[r]);
                r--;
            }

        }
        
        
    }
};