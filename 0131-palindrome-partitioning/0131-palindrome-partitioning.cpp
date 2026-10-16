class Solution {
public:
    vector<vector<string>> result;
    bool isPalindrome(string &s, int left, int right){
         while (left < right) {
            if(s[left] == s[right]) {
                left++;
                right--;
            }
            else {
                return false;
            }
        }
        return true;
    }
    void solve(string s,vector<string> current,int i){
        if(i==s.size()){
            result.push_back(current);
            return;
        }
        for(int idx=i;idx<s.size();idx++){
            if(isPalindrome(s,i,idx)){
                current.push_back(s.substr(i,idx-i+1));
                solve(s,current,idx+1);
                current.pop_back();

            }
        }

    }
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        solve(s,temp,0);
        return result;
    }
};