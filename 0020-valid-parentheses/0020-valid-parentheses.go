func isValid(s string) bool {
    mymap := map[rune]rune{'(': ')', '[': ']', '{': '}'} 
    sl := make([]rune, 0) // space (O(n))
    for _, v := range(s) { // time O(n)
        if _,ok := mymap[v]; ok {
            sl = append(sl, rune(v))
        } else if len(sl) == 0 || rune(v) != mymap[sl[len(sl) - 1]] {
            return false
        } else {
            sl = sl[0:len(sl) - 1]
        }
    }
    return len(sl) == 0
}