class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0,l=0,len=0;
        unordered_map<char,int> mp;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                l = max(l, mp[s[j]] + 1);

            }
            mp[s[j]]=j;
            len=max(len,j-l+1);
            j++;
        }
        return len;
    }
};