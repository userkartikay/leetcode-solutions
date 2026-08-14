class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int f=0,l=0,prefix=0;
        unordered_map<int,int> mp;
        for(int r=0;r<nums.size();r++){
            mp[nums[r]]++;
            
            if(mp.size()>k){
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                l++;
                prefix=0;
            }
            while(mp[nums[l]]>1){
                mp[nums[l]]--;
                l++;
                prefix++;

            }
            if(mp.size()==k){
                f+=(prefix+1);

            }
            
        }
        return f;
        
    }
};