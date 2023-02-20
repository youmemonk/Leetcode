/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //min 2 elements
        if(head == NULL || head->next == NULL){
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        while(slow != NULL && fast != NULL && fast->next != NULL){
            if(slow == fast){
                return true;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return false;
    }
};