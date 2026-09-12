class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        std::vector<int> result {};
        for(auto [i, v] : std::views::enumerate(nums)){
            if(map.contains(target-v)) return {map[target-v], static_cast<int>(i)};
            map[v] = i;
        }
        return result;
    }
};