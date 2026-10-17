class Solution {
public:
    unordered_set<string> set;
    void solve(string &s,int i,string current){
        if(s.size()==current.size()){
            if(set.find(current)==set.end()){
                set.insert(current);
            }
            return ;
        }
        if(!isdigit(s[i])){
            if(isupper(s[i])){
                solve(s,i+1,current+(char)tolower(s[i]));
            }
            else if(islower(s[i])){
                solve(s,i+1,current+(char)toupper(s[i]));
            }
            solve(s,i+1,current+s[i]);
        }
        else{
             solve(s,i+1,current+s[i]);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        solve(s,0,"");
        vector<string> v1(set.begin(),set.end());
        return v1;
    }
};