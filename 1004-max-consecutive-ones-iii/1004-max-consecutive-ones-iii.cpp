class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size(),left=0,j=0,c=0,len=0;
        while(j<n){
            if(nums[j]==0) c++;
            while(c>k){
                if(nums[left]==0) c--;
                left++;                
            }
            len=max(len,j-left+1);
            j++;
            
        }
        return len;
        
        
    }
};