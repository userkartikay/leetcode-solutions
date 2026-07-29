class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> v1;
        unordered_map<int,int> mp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int j=0;j<nums1.size();j++){
                v1.push_back(mp[nums1[j]]);
        }
        return v1;

        
    }
};