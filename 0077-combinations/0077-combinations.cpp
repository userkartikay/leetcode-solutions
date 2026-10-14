class Solution {
public:
    vector<vector<int>> result;
    void solve(int n,int idx,int k,vector<int> &current){
        if(current.size()==k){
            result.push_back(current);
            return;
        }
        for (int i = idx; i <= n; i++) {

            current.push_back(i);

            solve(n, i + 1, k, current);

            current.pop_back();
        }
        
        

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        solve(n,1,k,current);
        return result;

    }
};