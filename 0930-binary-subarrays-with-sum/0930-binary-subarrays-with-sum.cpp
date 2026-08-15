class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int c=0,prefix=0,k=0,l=0;
        for(int i=0;i<nums.size();i++){
            k+=nums[i];
            if(nums[i]==1){
                prefix=0;
            }
            while(k>goal && l<=i){
                k-=nums[l];
                l++;
            }
            while(k==goal && l<=i){
                prefix++;
                if(nums[l]==1){
                    k--;
                }
                l++;
            }
            c+=prefix;
            
        }
        return c;
    }
};