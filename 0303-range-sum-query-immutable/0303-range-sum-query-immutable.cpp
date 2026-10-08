class NumArray {
public:
    vector<int> v1;
    NumArray(vector<int>& nums) {
        v1.resize(nums.size());
        v1[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            v1[i] = v1[i - 1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) return v1[right];
        return v1[right]-v1[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */