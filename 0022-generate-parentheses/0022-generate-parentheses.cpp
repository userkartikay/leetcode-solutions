class Solution {
public:
    vector<string> result;
    bool is_valid(string s){
            int count=0;
            for(char ch:s){
                if(ch=='('){
                    count++;
                }
                else{
                    count--;
                }
                if(count<0){
                    return false;
                }
            }
            return count==0;
    }
    void solve(string s,int n){
        if(s.length()==2*n){
            if(is_valid(s)){
                result.push_back(s);
            }
            return;
        }
        s.push_back('(');
        solve(s,n);
        s.pop_back();

        s.push_back(')');
        solve(s,n);
        s.pop_back();
        


    }

    vector<string> generateParenthesis(int n) {
        solve("",n);
        return result;
       

        
    }
};