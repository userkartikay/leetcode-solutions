class Solution {
public:

    int sumSubarrayMins(vector<int>& arr) {
        stack<int> st;
        int n=arr.size();
        stack<int> st1;
        vector<int> right(n);
        vector<int> left(n);
        long long s=0;
        const int MOD=1e9+7;
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                right[i]=n-i;
            }
            else{
                right[i]=st.top()-i;
            }
            st.push(i);
        }
        for(int i=0;i<n;i++){
            while(!st1.empty() && arr[st1.top()]>arr[i]){
                st1.pop();
            }
            if(st1.empty()){
                left[i]=i+1;
            }
            else{
                left[i]=i-st1.top();
            }
            st1.push(i);
        }
        for(int i=0;i<n;i++){
            s=(s+(long long)arr[i]*left[i]*right[i])%MOD;
        }
        return (int)s;
        
    }
};