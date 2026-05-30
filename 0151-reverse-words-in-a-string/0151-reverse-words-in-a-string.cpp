class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int j=0,c=0;
        while (!s.empty() && s[0] == ' ') {
        s.erase(0, 1);}
        while (!s.empty() && s.back() == ' ') {
        s.pop_back();}
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s.begin() + j, s.begin() + i );
                j=i+1;
            }
            else if( i==s.size()-1){
                reverse(s.begin() + j, s.begin() + i + 1);
            }
            
        }
        int k = 0;
    bool spaceSeen = false;
    for (char c : s) {
        if (c != ' ') {
            s[k++] = c;
            spaceSeen = false;
        } else if (!spaceSeen) {
            s[k++] = ' ';
            spaceSeen = true;
        }
    }
    s.resize(k);
        return s;
            

        
        
    }
};