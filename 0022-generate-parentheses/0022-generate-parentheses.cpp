class Solution {
public:
    vector<string> result;
   
    void solve(string s,int n,int open,int close){
        if(s.length()==2*n){
            
            result.push_back(s);
        }
        if(open<n){
            s.push_back('(');
            solve(s,n,open+1,close);
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            solve(s,n,open,close+1);
            s.pop_back();
        }
        


    }

    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        solve("",n,open,close);
        return result;
       

        
    }
};