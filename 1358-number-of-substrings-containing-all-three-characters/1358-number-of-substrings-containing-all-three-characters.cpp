class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        mp['a']=0;
        mp['b']=0;
        mp['c']=0;
        int j=0;
        int result=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            while(mp['a']>0 && mp['b']>0 && mp['c']>0){
                mp[s[j]]--;
                j++;
            }
            result+=j;

        }
        return result;
        


        
    }
};