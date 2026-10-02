class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v1(s.begin(),s.end());
        unordered_map<char,int> mp;
        mp['a']++;
        mp['A']++;
        mp['e']++;
        mp['E']++;
        mp['i']++;
        mp['I']++;
        mp['o']++;
        mp['O']++;
        mp['u']++;
        mp['U']++;
        int l=0,r=v1.size()-1;
        while(l<r){
            if(mp.find(v1[l])!=mp.end() && mp.find(v1[r])!=mp.end()){
                swap(v1[l],v1[r]);
                l++;
                r--;
            }
            else if(mp.find(v1[l])!=mp.end() && mp.find(v1[r])==mp.end()){
                r--;
            }
            else if(mp.find(v1[l])==mp.end() && mp.find(v1[r])!=mp.end()){
                l++;
            }
            else{
                l++;
                r--;
            }
        }
        string s1(v1.begin(),v1.end());
        return s1;

        
    }
};