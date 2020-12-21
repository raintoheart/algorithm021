class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> tmp;
        def(res, 1, k, n, tmp);
        return res;
    }

    void def(vector<vector<int>>&res, int i, int k, int n, vector<int> &tmp) {

        if (0 == k) {
            res.push_back(tmp);        
            return;
        }
        for(int cur = i; (cur <= n-k+1); cur++) {
            tmp.push_back(cur);
            def(res, cur+1, k-1, n, tmp);
            tmp.pop_back();
        }
    }
};
