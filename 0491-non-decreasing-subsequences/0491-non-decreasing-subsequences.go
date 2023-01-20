func findSubsequences(nums []int) [][]int {
    var output = make([][]int, 0)
    var tmp = make([]int, 0)
    dfs(0, nums, &output, &tmp)
    return output
}

func dfs(start int, nums []int, output *[][]int, tmp *[]int) {
    if len(*tmp) >= 2 {
        cp := make([]int, len(*tmp))
        copy(cp, *tmp)
        *output = append(*output, cp)
    }

    var visited = make(map[int]bool)
    for i := start; i < len(nums); i++ {
        if (len(*tmp) > 0 && (*tmp)[len(*tmp)-1] > nums[i]) || visited[nums[i]]{
            continue
        }
        *tmp = append(*tmp, nums[i])
        visited[nums[i]] = true
        dfs(i+1, nums, output, tmp)
        *tmp = (*tmp)[:len(*tmp)-1]
    }
}