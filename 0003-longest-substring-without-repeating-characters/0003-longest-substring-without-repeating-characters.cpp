class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        else if(s.size()==1) return 1;
        map<char,int> mp;
        int i=0,j=0,l=0;
        while(j<s.size()){
            mp[s[j]]++;
            while (mp[s[j]] > 1) {
                mp[s[i]]--;
                i++;
            }
            l=max(l,j-i+1);
            j++;
            
        }
        return l;
    }
};