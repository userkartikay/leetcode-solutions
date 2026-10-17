class Solution {
public:
    vector<string> result;

    void solve(string &digits,unordered_map<char,vector<char>>& mp,string current,int i){
        if(i==digits.size()){
            if(digits.size()==current.size()){
                result.push_back(current);
            }
            return;
            
        }
        char digit=digits[i];
        for(char c:mp[digit]){
            solve(digits, mp, current + c, i + 1);
        }

    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
         unordered_map<char, vector<char>> mp = {
        {'2', {'a','b','c'}},
        {'3', {'d','e','f'}},
        {'4', {'g','h','i'}},
        {'5', {'j','k','l'}},
        {'6', {'m','n','o'}},
        {'7', {'p','q','r','s'}},
        {'8', {'t','u','v'}},
        {'9', {'w','x','y','z'}}};
        solve(digits,mp,"",0);
        return result;
        
    }
};