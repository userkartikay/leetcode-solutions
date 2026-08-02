class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        stack<int> st;
        int n = nums.size();
        vector<int> right(n);
        vector<int> left(n);
        long long s = 0, b = 0;
        
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            right[i] = st.empty() ? (n - i) : (st.top() - i);
            st.push(i);
        }
        
        while (!st.empty()) st.pop();
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            left[i] = st.empty() ? (i + 1) : (i - st.top());
            st.push(i);
        }
        
        for(int i = 0; i < n; i++){
            s += (long long)nums[i] * left[i] * right[i];
        }
        
        while (!st.empty()) st.pop();

        
        
        for(int i = n - 1; i >= 0; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            right[i] = st.empty() ? (n - i) : (st.top() - i);
            st.push(i);
        }
        
        while (!st.empty()) st.pop();
        
        for(int i = 0; i < n; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            left[i] = st.empty() ? (i + 1) : (i - st.top());
            st.push(i);
        }
        
        for(int i = 0; i < n; i++){
            b += (long long)nums[i] * left[i] * right[i];
        }

        return b - s; 
    }

        
    
};