class Solution {
public:
    bool possible(vector<int>& weights,int cap,int days){
        int daysneeded=1,currentload=0;
        for(auto it:weights){
            if(currentload+it>cap){
                daysneeded++;
                currentload=it;
            }
            else{
               currentload+=it;
            }
        }
        return daysneeded<=days;
        
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(), weights.end()),r=accumulate(weights.begin(), weights.end(), 0);
        while(l<=r){
            int mid=l+(r-l)/2;
            if(possible(weights,mid,days)){
                r=mid-1;
            }
            else{
                l=mid+1;
            } 
        }
        return l;

        
    }
};