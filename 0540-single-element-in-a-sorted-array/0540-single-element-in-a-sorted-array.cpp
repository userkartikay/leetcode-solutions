class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int l=0,r=nums.size()-1,ans=0,lf;
        while(l<=r){
            int mid=l+(r-l)/2;
            if((mid-1<0 || nums[mid-1]!=nums[mid]) && (mid+1==nums.size()||nums[mid+1]!=nums[mid])){
                ans=nums[mid];
                return nums[mid];}
            if(mid>0 && nums[mid]==nums[mid-1]){
                lf=mid-1;
            }
            else{
                lf=mid;
            }
            if(lf%2==0){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            
           

            

        }
        return ans;

        
    }
};