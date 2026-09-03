class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return nums[nums.size()-1];
        int f=0;
        unordered_map<int,int> mp;
        for(int i=nums.size()-1;i>=0;i--){
            if(mp.find(nums[i])!=mp.end()){
                continue;
            }
            else{
                mp[nums[i]]++;
                f++;
            }
            if(f==3){
                return nums[i];
            }
            if(i==0 && f!=3){
                return nums[nums.size()-1];

            }

        }
        return nums[nums.size()-1];
        
    }
};