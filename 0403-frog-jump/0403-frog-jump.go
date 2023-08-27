func canCross(stones []int) bool {
    if stones[1] != 1 {
        return false
    }
    
    memo := map[string]bool{}
    
    var dfs func(i, unit int) bool
    dfs = func(i, unit int) bool {
        if i == len(stones)-1 {
            return true
        }
        
        key := fmt.Sprintf("%d,%d", i, unit)
        if _, ok := memo[key]; ok {
            return memo[key]
        }
        
        for j := i+1; j<len(stones); j++ {
		    // explore all the possible stone that we can jump onto
            if stones[j] == stones[i] + unit-1 {
                if dfs(j, unit-1) {
                    return true
                }
            }
            
            if stones[j] == stones[i] + unit {
                if dfs(j, unit) {
                    return true
                }
            }

            if stones[j] == stones[i] + unit+1 {
                if dfs(j, unit+1) {
                    return true
                }
            }
        }
        
        memo[key] = false
        return false
    }
    return dfs(1, 1)
}