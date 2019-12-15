/*
 * @lc app=leetcode.cn id=1 lang=golang
 *
 * [1] 两数之和
 */
// todo
// @lc code=start
func twoSum(nums []int, target int) []int {
	index := make(map[int]int, len(nums))
	for i, b := range nums {
		if j, ok := index[b]; ok {
			return []int{j, i}
		}
		index[target-b] = i
	}
	return nil
}
// @lc code=end

