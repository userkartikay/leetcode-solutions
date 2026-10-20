class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i=0;
        for(auto x:operations){
            if(x=="++X"){
                ++i;
            }
            else if(x=="X++"){
                i++;
            }
            else if(x=="X--"){
                i--;
            }
            else{
                --i;
            }
        }
        return i;
    }
};