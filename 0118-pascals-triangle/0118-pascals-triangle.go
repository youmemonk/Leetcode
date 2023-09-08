func generate(numRows int) [][]int { 
    res := make([][]int, numRows)
    
    for i := 0; i < numRows; i++ {
        level := make([]int, i+1)
        for j := 0; j <= i; j++ {
            if j == 0 || j == i {
                level[j] = 1
            } else {
                level[j] = res[i-1][j-1] + res[i-1][j]
            }
        }
        res[i] = level
    }
    
    return res
}