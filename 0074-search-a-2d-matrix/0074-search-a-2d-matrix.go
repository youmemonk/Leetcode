func searchMatrix(matrix [][]int, target int) bool {
    m := len(matrix)
    n := len(matrix[0])
    r := 0
    c := n - 1

    for r < m && c >= 0 {
        if target < matrix[r][c] {
            c--
        } else if target > matrix[r][c] {
            r++
        } else {
            return true
        }
    }

    return false
}