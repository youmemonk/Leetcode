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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* n1 = l1, *n2 = l2;
        ListNode* head,*curr;
        head = curr = new ListNode(0);
        int sum = 0, carry = 0;
        while(n1!=NULL || n2!=NULL || carry==1){
            sum = (n1!=NULL?n1->val:0) + (n2!=NULL?n2->val:0) + carry;
            carry = sum/10;
            sum = sum%10;
            curr = curr->next = new ListNode(sum);
            n1 = (n1!=NULL?n1->next:NULL);
            n2 = (n2!=NULL?n2->next:NULL);
        }
        return (head->next!=NULL?head->next:NULL);
    }
};