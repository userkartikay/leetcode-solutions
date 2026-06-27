class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x= start^goal;
        int c=0;
        while(x>0){
            
            c+=(x & 1);
            x >>= 1;
        }
        
        return c;
    }
};