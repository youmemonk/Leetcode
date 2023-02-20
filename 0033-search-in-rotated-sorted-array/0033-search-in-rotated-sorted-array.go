func search(nums []int, target int) int {
	n := len(nums)
	l, r := 0, n-1
	for l < r {
		mid := (l + r) / 2
		if nums[mid] > nums[r] {
			l = mid + 1
		} else {
			r = mid
		}
	}
	pivot := l
	l, r = 0, n-1
	for l <= r {
		mid := (l + r) / 2
		mid2 := (mid + pivot) % n
		if nums[mid2] == target {
			return mid2
		} else if nums[mid2] < target {
			l = mid + 1
		} else {
			r = mid - 1
		}

	}
	return -1
}