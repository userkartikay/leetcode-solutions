class Solution {
public:
    void Merge(vector<int> &nums,int l,int r,int m){
        int i=l,j=m+1,k=0;
        vector<int> temp(r-l+1);
        while(i<=m && j<=r){
            if(nums[i]<nums[j]){
                temp[k++]=nums[i++];
            }
            else{
                temp[k++]=nums[j++];
            }
        }
        while(i<=m){
            temp[k++]=nums[i++];
        }
        while(j<=r){temp[k++]=nums[j++];}
        for(i=l,k=0;i<=r;i++,k++){
            nums[i]=temp[k];
        }
    }
    void MergeSort(vector<int> &nums,int l,int r){
        int mid=(l+r)/2;
        if(l<r){
            MergeSort(nums, l, mid);
            MergeSort(nums, mid+1, r);
            Merge(nums,l,r,mid);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        MergeSort(nums,0,nums.size()-1);
        return nums;
        
        
        
    }
};