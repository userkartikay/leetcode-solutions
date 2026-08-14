class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int r=0,l=0,n=fruits.size(),maxf=INT_MIN;
        
        for(int r=0;r<n;r++){
            mp[fruits[r]]++;
            if(mp.size()>2){
                while(mp.size()>2){
                    mp[fruits[l]]--;
                    
                    if(mp[fruits[l]]==0){
                        mp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            maxf=max(maxf,r-l+1);
        }
        return maxf==INT_MIN ? 0:maxf;
        
    }
};