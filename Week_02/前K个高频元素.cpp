class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (const auto& num : nums) {
            mp[num]++;
        }

        priority_queue<pair<int, int>> pq;
        for (const auto& m : mp) {
            pq.push({m.second, m.first});
        }

        vector<int> res;
        for (int i = 0; i < k; i++) {
            auto cur = pq.top(); pq.pop();
            res.push_back(cur.second);
        }

        return res;
    }
};