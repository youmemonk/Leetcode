var memo map[int]int

func minExtraChar(s string, dictionary []string) int {
    charToWords := make(map[byte][]string)
    for _, word := range dictionary {
        charToWords[word[0]] = append(charToWords[word[0]], word)
    }
    memo = make(map[int]int)
    return dfs(s, charToWords, 0)
}

func dfs(s string, charToWords map[byte][]string, i int) int {
    if i == len(s) {
        return 0
    }
    if v, ok := memo[i]; ok {
        return v
    }
    rs := len(s)
    for _, word := range charToWords[s[i]] {
        if i+len(word) <= len(s) && s[i:i+len(word)] == word {
            rs = min(rs, dfs(s, charToWords, i+len(word)))
        }
    }
    rs = min(rs, dfs(s, charToWords, i+1)+1)
    memo[i] = rs
    return rs
}

func min(a, b int) int {
    if a < b {
        return a
    }
    return b
}