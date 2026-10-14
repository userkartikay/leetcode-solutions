class Solution {
public:
    bool solve(vector<int> &v1,int i,vector<int> &dp){
        if(i==(v1.size()-1)){
            return true;
        }
        if(i>=(v1.size()-1)){
            return false;
        }
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=v1[i];j++){
            if(solve(v1,i+j,dp)) return dp[i]=true;
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums,0,dp);
    }
};