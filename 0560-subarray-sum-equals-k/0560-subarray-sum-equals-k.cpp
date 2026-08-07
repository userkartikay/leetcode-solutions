class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i=0,j=0,sum=0,n=nums.size(),c=0;
        unordered_map<int,int> mp;
        mp[0]++;
        while(j<nums.size()){
            sum+=nums[j];
            if(mp.find(sum-k) != mp.end()){
                c+=mp[sum-k];
            }
            mp[sum]++;
            j++;
            
        }
        return c;

        
    }
};