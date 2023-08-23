type rCount struct {
	val   rune
	count int
}
type rList []rCount

func (s rList) Len() int {
	return len(s)
}
func (s rList) Less(i, j int) bool {
	return s[i].count > s[j].count
}
func (s rList) Swap(i, j int) {
	s[i], s[j] = s[j], s[i]
}
func (s *rList) Push(x interface{}) {
	*s = append(*s, x.(rCount))
}
func (s *rList) Pop() interface{} {
	top := (*s)[0]
	*s = (*s)[1:]
	return top
}

func reorganizeString(S string) string {
	if len(S) <= 1 {
		return S
	}
	count := make(map[rune]int)
	for _, r := range S {
		count[r] ++
		if count[r] > (len(S)+1)/2 {
			return ""
		}
	}
	var nums rList
	for k, v := range count {
		nums = append(nums, rCount{
			val:   k,
			count: v,
		})
	}
	heap.Init(&nums)
	var res []rune
	var prev rune
	for len(nums) > 0 {
		n1 := nums.Pop().(rCount)
		if n1.val != prev {
			res = append(res, n1.val)
			n1.count--
			prev = n1.val
		}
		if len(nums) == 0 {
			break
		}
		n2 := nums.Pop().(rCount)
		if n2.val != prev {
			res = append(res, n2.val)
			n2.count--
			prev = n2.val
		}
		if n1.count > 0 {
			heap.Push(&nums, n1)
		}
		if n2.count > 0 {
			heap.Push(&nums, n2)
		}
	}

	return string(res)
}