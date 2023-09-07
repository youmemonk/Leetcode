func reverseBetween(node *ListNode, left int, right int) *ListNode {
    if node == nil || node.Next == nil {
        return node
    }
    var head *ListNode = node

    var previous, subHead *ListNode = nil, node
    for i := 1; i < left; i++ {
        previous, subHead = subHead, subHead.Next
    }
    
    var subTail, next *ListNode = subHead, subHead.Next
    for i := 1; i < right-left+1; i++ {
        subTail, next = subTail.Next, next.Next
    }
    subTail.Next = nil
    

    subTail, subHead = reverse(subHead, subTail)
    
    if previous != nil {
        previous.Next = subHead
    }
    subTail.Next = next
    
    if left == 1 {
        head = subHead
    }
    
    return head
}

func reverse(head, tail *ListNode) (*ListNode, *ListNode) {
    var previous, current *ListNode = nil, head
    for current != tail {
        previous, current, current.Next = current, current.Next, previous
    }
    tail.Next = previous
    return head, tail
}

func printList(node *ListNode) {
    var sb strings.Builder
    sb.WriteString("[")
    for node != nil {
        sb.WriteString(fmt.Sprintf("%v ", node.Val))
        node = node.Next
    }
    sb.WriteString("]")
    fmt.Println(sb.String())
}