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
    ListNode* middleNode(ListNode* head) {
        //count all elements
        int count = 0;
        ListNode *curr = head;
        while(curr){
            count++;
            curr = curr->next;
        }
        
        // cout << count << endl;
        int mid = count/2 + 1;
        ListNode *it = head;
        while(--mid){
            it = it->next;
        }
        
        return it;
    }
};