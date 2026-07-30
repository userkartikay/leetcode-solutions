class Solution {
public:
    vector<int> v1; 
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        vector<int> v1(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(!st.empty()){
                v1[i%n]=st.top();
                
            }
            st.push(nums[i%n]);
        }
        return v1;

        
        
    }
};