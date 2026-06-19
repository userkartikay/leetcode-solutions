class Solution {
public:
    void reverses(vector<char>&arr,int l,int r){
        if(l>=r) return;
        swap(arr[l],arr[r]);
        reverses(arr,l+1,r-1);

    }
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        reverses(s,l,r);


        
    }
};