class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,i=0;
        while(i<g.size() && l<s.size()){
            if(s[l] >= g[i]){
                i++;
            }
            l++;
        }
        return i;

        
    }
};