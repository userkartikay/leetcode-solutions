class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,int> mp,mp1;
       if(s.size()!=t.size()) return false;
       for(int i=0;i<s.size();i++){
        
        if(mp.find(s[i])!=mp.end() && mp1[t[i]]!=s[i]||mp1.find(t[i])!=mp.end() && mp[s[i]]!=t[i]) return false;
        
        mp[s[i]]=t[i];
        mp1[t[i]]=s[i];
       }
       return true;
        
    }
};