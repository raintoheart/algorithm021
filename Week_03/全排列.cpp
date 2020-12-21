class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    
        vector<vector<int>> res;
        def(nums, res, nums.size(), 0);
        return res;
    }

    void def(vector<int> &nums, vector<vector<int>> &res, int n, int first)
    {
        if(first == n) {
            res.push_back(nums);
            return;
        }
        for(int i = first; i < n; i++) {
            swap(nums[first], nums[i]);
            def(nums, res, n, first+1);
            swap(nums[first], nums[i]);
        }
    }
    
};