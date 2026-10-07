class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int j=0,l=0,s=0;
        while(j<k){
            s+=nums[j];
            j++;
        }
        double f=(double)s/k;
        
        while(j<nums.size()){
            s-=nums[l];
            s+=nums[j];
            f=max(f,(double)s/k);
            j++;
            l++;
           
        }
        return f;
    }
};