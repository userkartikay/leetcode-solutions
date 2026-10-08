class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int,int> mp;
       int j=0,l=0,len=0;
       
       while(j<fruits.size()){
        mp[fruits[j]]++;
        while(mp.size()>2){
            mp[fruits[l]]--;
            if(mp[fruits[l]]==0){
                mp.erase(fruits[l]);
            }
            l++;

        }
        len=max(len,j-l+1);
        j++;
       }
       return len;
       
        
    }
};