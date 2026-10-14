class Solution {
public:
    vector<vector<int>> result;
    void solve(int n,int idx,int k,vector<int> &current){
        if(current.size()==k){
            result.push_back(current);
            return;
        }
        if (idx > n) return;
        
        current.push_back(idx);

        solve(n,idx+1,k,current);
        current.pop_back();
        solve(n,idx+1,k,current);
        

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        solve(n,1,k,current);
        return result;

    }
};