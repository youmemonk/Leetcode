/**
 * Definition for a Node.
 * type Node struct {
 *     Val int
 *     Next *Node
 *     Random *Node
 * }
 */

func copyRandomList(head *Node) *Node {
    h := make(map[*Node]*Node)
    cur := head
    for cur != nil{
        h[cur] = &Node{
            Val: cur.Val,
        }
        cur = cur.Next
    }
    cur = head
    for cur != nil {
        h[cur].Next = h[cur.Next]
        h[cur].Random = h[cur.Random]
        cur = cur.Next
    }

    return h[head]
}