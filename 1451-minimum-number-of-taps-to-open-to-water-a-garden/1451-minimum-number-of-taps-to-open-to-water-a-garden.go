func minTaps(n int, ranges []int) int {
    intervals := [][]int{}
    for i := 0; i <= n; i++ {
        intervals = append(intervals, []int{i - ranges[i], i + ranges[i]})
    }
    sort.Slice(intervals, func(i, j int) bool {
        return intervals[i][0] < intervals[j][0]
    })
    end, j, ans := 0, 0, 0
    for i := 0; i <= n && end < n; i = j {
        if intervals[i][0] > end {return -1}
        nextEnd := end
        for j = i; j <= n && intervals[j][0] <= end; j++ {
            if intervals[j][1] >= nextEnd {
                nextEnd = intervals[j][1]
            }
        }
        end = nextEnd
        ans++
    }
    return ans
}