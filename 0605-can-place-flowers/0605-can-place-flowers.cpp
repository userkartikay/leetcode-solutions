class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1){
            return (flowerbed[0]==0 && n==1)||(flowerbed[0]==1 && n==0)||flowerbed[0]==0 && n==0;
        }
        int c=0,i=0;
        if(i==0){
                if(flowerbed[i]==0 && flowerbed[i+1]==0){
                    c++;
                    flowerbed[i]=1;

                }
        }
        for(i=1;i<flowerbed.size();i++){
            if(i==flowerbed.size()-1){
                if(flowerbed[i]==0 && flowerbed[i-1]==0){
                    c++;
                    flowerbed[i]=1;

                }
            }
            else{
                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    c++;
                    flowerbed[i]=1;
                }
            }
            if(c>=n){
                return true;
            }


        }
        return false;
        
    }
};