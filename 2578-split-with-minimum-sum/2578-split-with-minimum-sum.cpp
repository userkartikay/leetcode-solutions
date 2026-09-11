class Solution {
public:
    int splitNum(int num) {
        vector<int> v1;
        int i=0;
        while(num>0){
            v1.push_back(num%10);
            num=num/10;
            i++;
        }
        
        sort(v1.begin(),v1.end());
        long long a = 0, b = 0;
        for(int i = 0; i < v1.size(); i++) {
        if(i % 2 == 0) {
            a = a * 10 + v1[i];
        } else {
            b = b * 10 + v1[i];
        }}
        return a+b;
    }
};