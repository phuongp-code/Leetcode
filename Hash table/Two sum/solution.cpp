class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int k = target - nums[i];
            if (mp.count(k)) {
                return {mp[k], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
