class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0,l=0,len=INT_MAX,s=0;

        while(j<nums.size()){
            s+=nums[j];
            while(s>=target){
                len=min(len,j-l+1);
                s-=nums[l];
                l++;
            }
            j++;
        }
        if(len!=INT_MAX){
            return len;
        }
        return 0;
        
    }
};