class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = std::lower_bound(nums.begin(), nums.end(), target);
        auto it2 = std::upper_bound(nums.begin(), nums.end(), target);
        if(it1 == nums.end() || *it1 != target) return {-1, -1};
        int x = std::distance(nums.begin(), it1);
        int y = std::distance(nums.begin(), it2) - 1;
        return {x, y};
    }
};