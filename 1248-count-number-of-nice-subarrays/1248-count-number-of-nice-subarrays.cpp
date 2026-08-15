class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        if(nums.size()<k) return 0;
        int n=0,l=0,c=0,prefix=0;

        for(int i=0;i<nums.size();i++){
            
            if(nums[i]%2!=0){
                n++;
                prefix=0;
            }
           
          
            while(n==k){
               prefix++;
               if(nums[l]%2!=0){
                n--;
               }
               l++;

            }
            c+=prefix;


        }
        return c;
        
    }
};