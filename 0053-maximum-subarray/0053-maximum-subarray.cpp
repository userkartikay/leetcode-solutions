class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,k=0,s=nums[k];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>s){
                s=sum;
            }
            while(sum<0){
                sum-=nums[k];
                k++;
            }
            

        }
        return s;
    }
};