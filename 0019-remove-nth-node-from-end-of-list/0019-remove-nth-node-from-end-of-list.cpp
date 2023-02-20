/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start = new ListNode();
        start->next = head;
        ListNode* fastptr = start;
        ListNode* slowptr = start;

        for(int i=0;i<n;i++){
            fastptr = fastptr->next;
        }
        while (fastptr->next != NULL) {
            fastptr = fastptr->next;
            slowptr = slowptr->next;
        }

        slowptr->next = slowptr->next->next;
        return start->next;
    }
};