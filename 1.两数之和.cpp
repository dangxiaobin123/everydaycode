/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include <vector>
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> cache;
        if (nums.size()<2)
        {
            return {};
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (cache.count(nums[i])!=0)
            {
                return {cache[nums[i]], i};
            }
            cache.emplace(target-nums[i], i);
        }
        return {};
    }
};
// @lc code=end

