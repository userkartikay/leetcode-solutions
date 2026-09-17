class Solution {
public:
    const int INF = 1e9;

    
    int solve(vector<int>& coins, int amount,int i,vector<vector<int>>&a){
        if(amount==0){
            return 0;
        }
        if(amount<0||i<0){
            return INF;
        }
        int use=INF;
        if(a[i][amount]!=-1){
            return a[i][amount];
        }
        if(amount>=coins[i]){
            use=1+solve(coins,amount-coins[i],i,a);
        }
        int skip=solve(coins,amount,i-1,a);
        return a[i][amount]=min(use,skip);


    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector< vector<int>> a(n,vector<int>(amount+1,-1));
        int result=solve(coins,amount,n-1,a);
        return (result >= INF) ? -1 : result;

        
    }
};