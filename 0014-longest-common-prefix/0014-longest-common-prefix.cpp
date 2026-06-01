class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) return strs[0];
        string c="";
        int minLen = min(strs[0].size(), strs[1].size());
        for(int i=0;i<minLen;i++){
            if(strs[0][i]==strs[1][i]){
                c+=strs[0][i];
            }
            else{
                break;
            }
        }
        if (strs.size()==2) return c;
        for(int i=2;i<strs.size();i++){
            for(int j=0;j<c.size();j++){
                if(c[j]!=strs[i][j]||j==strs[i].size()){
                    c=c.substr(0,j);
                    break;
                }
            }
        }
        return c;
        
    }
};