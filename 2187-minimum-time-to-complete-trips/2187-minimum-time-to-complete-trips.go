func minimumTime(time []int, totalTrips int) int64 {
	sort.Ints(time)
	l, r := 1, totalTrips*time[0]
	for l <= r {
		timeTotal := (l+r)>>1
		trip := 0
		for _, v := range time {
			trip += timeTotal/v
		}
		if trip >= totalTrips {
			r = timeTotal-1
		} else {
			l = timeTotal+1
		}
	}
	return int64(r+1)
}