class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        vector<int> nsr(n,n);
        vector<int> nsl(n,-1);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                nsr[st.top()]=i;
                st.pop();

            }
            st.push(i);
        }
        stack<int> st1;

        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && heights[st1.top()]>=heights[i]){
                nsl[st1.top()]=i;
                st1.pop();

            }
            st1.push(i);
        }
        int maxarea=0;
        int h;
        for(int i=0;i<n;i++){
            h=(nsr[i]-nsl[i]-1)*heights[i];
            if(h>maxarea){
                maxarea=h;
            }
        }
        return maxarea;
        
    }
};