func lengthOfLongestSubstring(s string) int {
	ans := 0

	seen := make(map[byte]int)
	i := 0
	for j := 0; j < len(s); j++ {
		index, ok := seen[s[j]]
		if ok && index>=i {
			i = index + 1
		}

		seen[s[j]] = j
		ans = max(ans, j-i+1)
	}

	return ans
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}