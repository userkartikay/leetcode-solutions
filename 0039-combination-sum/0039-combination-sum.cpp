class Solution {
public:
    vector<vector<int>> result;
    int sum=0;
    void solve(vector<int>& candidates,int i,int target,vector<int>& current){
        if (target == 0) {
        result.push_back(current);
        return;
        }
        if(target<0 ||i>=candidates.size()){
            return;
        }
        current.push_back(candidates[i]);
        solve(candidates,i,target-candidates[i],current);
        current.pop_back();
        solve(candidates,i+1,target,current);

        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        solve(candidates,0,target,current);
        return result; 
        
    }
};