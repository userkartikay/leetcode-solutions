class Solution {
public:
    vector<string> result;
   
    void solve(string s,int n,int open,int close){
        if(s.size()==2*n){
            result.push_back(s);
    
            return;
        }
        if(open<n){
            solve(s+'(',n,open+1,close);}
        if(close<open){
            solve(s+')',n,open,close+1);}

    
    }

    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        solve("",n,open,close);
        return result;
       

        
    }
};