class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v1;
        int a=0;
        for(auto w:words){
            for(auto i:w){
                if(i==x){
                    v1.push_back(a);
                    break;
                }
            }
            a++;
        }
        return v1;

    }
};