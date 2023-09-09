func combinationSum4(nums []int, target int) int {
    combinationCache := make([]int, target + 1)
    combinationCache[0] = 1
    
    for currSum := 1; currSum <= target; currSum++ {
        for _, num := range nums {
            prevSum := currSum - num
            if prevSum < 0 || combinationCache[prevSum] == 0 {
                continue
            }
            
            combinationCache[currSum] += combinationCache[prevSum]
        }
    }
    
    return combinationCache[target]
}