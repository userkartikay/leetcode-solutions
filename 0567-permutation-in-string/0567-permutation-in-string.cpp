class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        unordered_map<char,int> mp,mp1;
        for(auto x:s1){
            mp1[x]++;
        }

        int j=0,l=0;
        while(j<s2.size()){
            mp[s2[j]]++;
            
            if(j-l+1>s1.size()){
                mp[s2[l]]--;
                if (mp[s2[l]] == 0) mp.erase(s2[l]);
                l++;
            }
            if(mp==mp1){
                return true;
            }
            j++;

        }
        return false;    

        
    }
};