func findLongestChain(pairs [][]int) int {
    sort.SliceStable(pairs, func(i, j int) bool {
        if pairs[i][0] == pairs[j][0] {
            return pairs[i][1] < pairs[j][1]
        }
        return pairs[i][0] < pairs[j][0]
    })
    longest, left := 1, pairs[len(pairs)-1][0]
    for i := len(pairs)-2; i >= 0; i-- {
        if pairs[i][1] < left {
            longest++
            left = pairs[i][0]
        }
    }
    return longest
}