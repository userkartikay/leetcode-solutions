class Solution {
public:
    bool is_valid(vector<int> &piles,int h,int mid){
        for(auto x:piles){
            h-=(x + mid - 1)/mid;
            if(h<0){
                return false;
            }

        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int r=*max_element(piles.begin(), piles.end());
        int l=1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(is_valid(piles,h,mid)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};