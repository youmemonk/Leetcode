func isInterleave(s1 string, s2 string, s3 string) bool {
    if len(s3) != len(s1) + len(s2) {
        return false
    }

    dp := make([][]bool, len(s1) + 1)
    for i := range dp {
        dp[i] = make([]bool, len(s2) + 1)
    }

    for i := range dp {
        for j := range dp[i] {
            if i == 0 && j == 0 {
                dp[i][j] = true
            } else if i == 0 {
                dp[i][j] = dp[i][j-1] && s2[j-1] == s3[i+j-1]
            } else if j == 0 {
                dp[i][j] = dp[i-1][j] && s1[i-1] == s3[i+j-1]
            } else {
                dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1]) || (dp[i][j-1] && s2[j-1] == s3[i+j-1])
            }
        }
    }
    return dp[len(s1)][len(s2)]
}