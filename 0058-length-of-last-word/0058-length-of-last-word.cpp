class Solution {
public:
    int lengthOfLastWord(string s) {
        int a=0;
        int l=-1;
        int q=-1;
        for(int i=s.size()-1;i>=0;i--){
            if(q==-1){
                if(s[i]!=' '){
                    q=i;
                
                }
            }
            if(q!=-1&&s[i]==' '){
                l=q-i;
                break;
            }
        }
        if (l == -1 && q != -1) {
            l = q + 1;
        }
        return l;
    }
};