class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        def(res,nums,0,nums.size()-1);
        return res;
    }

    void def(vector<vector<int>> &res, vector<int> nums, int begin, int end)
    {
        if(begin == end){
            res.push_back(nums);
            return;
        }
        for(int i = begin; i <= end; i++) {
            if(i != begin && nums[i] == nums[begin]){
                continue;
            }
            swap(nums[begin],nums[i]);
            def(res, nums, begin+1, end);
            //swap(nums[i],nums[begin]);
        }
    }
};