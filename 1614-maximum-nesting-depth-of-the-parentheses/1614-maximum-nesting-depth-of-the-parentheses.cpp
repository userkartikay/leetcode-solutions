class Solution {
public:
    int maxDepth(string s) {
        int max=0,t=0;
        stack<char> st;
        for(auto c:s){
            if(c=='('){
                st.push('(');
                t++;
                if(t>max){
                    max=t;
                }
            }
            else if(c==')'){
                st.pop();
                t--;
            }
        }
        return max;
        
    }
};