func uniquePaths(m int, n int) int {
	if m == 1 || n == 1 {
		return 1
	}
	if m == 2 {
		return n
	}
	if n == 2 {
		return m
	}
	if m == n {
		return uniquePaths(m, n-1) * 2
	}
	return uniquePaths(m, n-1) + uniquePaths(m-1, n)
}