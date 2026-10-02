class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0,k=0,profit=prices[0];
        for(int i=0;i<prices.size();i++){
            profit=prices[i]-prices[k];
            if(profit>p){
                p=profit;
            }
            while(prices[k]>prices[i]){
                profit-=prices[k];
                k++;
            }
        }
        return p;

        
    }
};