class Solution {
public:
    vector<vector<int>> result;
    void solve(int k,int n, vector<int> temp,int index){
        if(temp.size()==k && n==0){
            result.push_back(temp);
            return;
        }
        if(temp.size()>=k ||n<0){
            return;
        }
        for(int i=index;i<=9;i++){
            if(n-i<0){
                break;
            }

            temp.push_back(i);
            solve(k,n-i,temp,i+1);
            temp.pop_back();
            
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        solve(k,n,temp,1);
        return result;

    }
};