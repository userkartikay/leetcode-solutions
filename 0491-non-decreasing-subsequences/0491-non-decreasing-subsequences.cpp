class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>& nums,int index,vector<int>& curr){
        if(curr.size()>=2){
                result.push_back(curr);
        }
        unordered_set<int> set;
        for(int i=index;i<nums.size();i++){
            if(curr.size()!=0 && curr.back()>nums[i]){
                continue;
            }
            if(set.count(nums[i])!=0) continue;
            set.insert(nums[i]);
            curr.push_back(nums[i]);
            solve(nums,i+1,curr);
            curr.pop_back();

        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> curr;
        solve(nums,0,curr);

        return result;

        
    }
};