class Solution {
public:

    vector<vector<int>> result;
    void solve(vector<int>& nums,int index,vector<int>& current){
        result.push_back(current);
        
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            current.push_back(nums[i]);
            solve(nums,i+1,current);
            current.pop_back();
        }
        


    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> current;
        sort(nums.begin(), nums.end());
        solve(nums,0,current);
        return result;
        
    }
};