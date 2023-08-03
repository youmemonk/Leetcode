func letterCombinations(digits string) []string {
    res := []string{}
    d := map[rune]string{
        50:  "abc",
        51: "def",
        52: "ghi",
        53: "jkl",
        54: "mno",
        55: "pqrs",
        56: "tuv",
        57: "wxyz",
    }
   final := []string{""}
   if len(digits) == 0{
       return (res)
   }
   for _, digit := range digits{
        curr := []string{}
        for  _, letter := range  d[digit]{
            for _, pre := range final{
                curr = append(curr, pre+string(letter))
            }
        }
        final = curr
   }
    return final
}