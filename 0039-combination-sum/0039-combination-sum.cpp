class Solution {
public:
    vector<vector<int>> result;
    int sum=0;
    void solve(vector<int>& candidates,int i,int target,vector<int>& current){
        if(target==0){
            result.push_back(current);
            return;
        }
        if(target<0) return;
        for(int idx=i;idx<candidates.size();idx++){
            current.push_back(candidates[idx]);
            solve(candidates,idx,target-candidates[idx],current);
            current.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        solve(candidates,0,target,current);
        return result; 
        
    }
};