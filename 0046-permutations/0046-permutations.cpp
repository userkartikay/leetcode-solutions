class Solution {
public:
    void solve(vector<int>& nums,vector<vector<int>> &result,vector<int> &current,vector<bool> &used,int i){
        if(nums.size()==current.size()){
            result.push_back(current);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]){
                continue;

            }
            current.push_back(nums[i]);
            used[i]=true;
            solve(nums,result,current,used,i);
            current.pop_back();
            used[i]=false;

        }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> result;
        vector<bool> used(nums.size(), false);
        solve(nums,result,current,used,0);
        return result;
    }
};