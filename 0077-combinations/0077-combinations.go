func combine(n int, k int) [][]int {
    answer := [][]int{}
    curr := []int{}

    var dfs func(int)
    dfs = func(idx int){
        if k == len(curr){
            answer = append(answer,make([]int,k))
            copy(answer[len(answer)-1],curr)
            return
        }
        if idx > n{
            return
        }
        for i:=idx;i<n+1;i++{
            curr = append(curr,i)
            dfs(i+1)
            curr = curr[:len(curr)-1]
        }
    }

    dfs(1)
    return answer
}