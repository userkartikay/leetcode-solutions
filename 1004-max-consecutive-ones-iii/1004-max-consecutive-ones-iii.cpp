class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int j=0,len=0,l=0,h=0;
      while(j<nums.size()){
        if(nums[j]==0) h++;
        if(h<=k){
            len=max(len,j-l+1);
        }
        if(h>k){
            while(h!=k){
                
                if(nums[l]==0){
                    h--;
                }
                l++;
            }
        }
        j++;
      }
      return len;
        
    }
};