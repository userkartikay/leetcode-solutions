class Solution {
public:
    int a[101];
    int solve(vector<int>& nums,int i){
        if(i>=nums.size()){
            return 0;
        }
        if(a[i]!=-1){
            return a[i];
        }
        int steal=nums[i]+solve(nums,i+2);
        int skip=solve(nums,i+1);
        return a[i]=max(steal,skip);
    }
    int rob(vector<int>& nums) {
        memset(a,-1,sizeof(a));
        return solve(nums,0);
        
    }
};