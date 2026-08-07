class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int j=0,c=0,sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        while(j<nums.size()){
            sum+=nums[j];
            int rem = ((sum % k) + k) % k;
            if(mp.find(rem)!=mp.end()){
                c+=mp[rem];
            }
            
            mp[rem]++;
            j++;

        }
        return c;


        
    }
};