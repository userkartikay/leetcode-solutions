class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";
        unordered_map<char,int> mp;
        string r;
        for(char k:t){
            mp[k]++;
        }
        int req=mp.size();
        int form=0;
        unordered_map<char,int> mp1;
        int i=0,j=0,minlen=INT_MAX;
        int start_ind=0;

        while(j<s.size()){
            mp1[s[j]]++;
            if(mp.count(s[j]) && mp[s[j]]==mp1[s[j]]){
                form++;
            }
            while(i<=j && form==req){
                if(j-i+1<minlen){
                    minlen=j-i+1;
                    start_ind=i;
                }
                mp1[s[i]]--;
                if(mp.count(s[i]) &&mp1[s[i]]<mp[s[i]]){
                    form--;
                }

                i++;
            }
            j++;
            
        }
        return minlen==INT_MAX ? "" :s.substr(start_ind,minlen);
        
    }
};