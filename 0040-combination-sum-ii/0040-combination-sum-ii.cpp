class Solution {
public:
    vector<vector<int>> result;
    int sum=0;
    void solve(vector<int>& candidates,int index,int target,vector<int>& current){
        if (target == 0) {
        result.push_back(current);
        return;
        }
        for(int i=index;i<candidates.size();i++){ 
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target) break;
            current.push_back(candidates[i]);
            solve(candidates,i+1,target-candidates[i],current);
            current.pop_back();
        
        }

        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        solve(candidates,0,target,current);
        return result;
        
    }
};