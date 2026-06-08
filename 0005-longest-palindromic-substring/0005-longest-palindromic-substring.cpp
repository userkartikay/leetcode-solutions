class Solution {
public:
    string longestPalindrome(string s) {
        int r=0,l=0,rl=0;
        string m="";

        for(int i=0;i<s.size();i++){
            l=i;
            r=i;
            while((l>=0 &&r<s.size()) && s[l]==s[r]){
                if((r-l+1)>rl){
                    m=s.substr(l,r-l+1);
                    rl=r-l+1;
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while((l>=0 &&r<s.size()) && s[l]==s[r]){
                if((r-l+1)>rl){
                    m=s.substr(l,r-l+1);
                    rl=r-l+1;
                }
                l--;
                r++;
            }
            
        }
        return m;
    }
};