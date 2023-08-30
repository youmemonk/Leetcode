func minimumReplacement(nums []int) int64 {
    var ans int64 = 0
    for i := len(nums) - 2; i >= 0; i-- {
        numOfParts := int(math.Ceil(float64(nums[i]) / float64(nums[i + 1])))
        ans += int64(numOfParts) - 1
        nums[i] = nums[i] / numOfParts
    }
    return ans
}