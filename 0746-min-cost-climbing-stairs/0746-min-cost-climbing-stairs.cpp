
class Solution {
public:
    int solve(vector<int> &cost,int i,vector<int> &a){
        if(i>=cost.size()){
            return 0;
        }
        if(a[i]!=-1){
            return a[i];
        }
        int skip1=cost[i]+solve(cost,i+1,a);
        int skip2=cost[i]+solve(cost,i+2,a);
        return a[i]=min(skip1,skip2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> a(1001,-1);
        return min(solve(cost, 0,a), solve(cost, 1,a));
        
    }
};