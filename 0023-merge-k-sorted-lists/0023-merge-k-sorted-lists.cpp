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
    ListNode* merge(ListNode *list1, ListNode *list2){
       if(list1==NULL){
           return list2;
       }
       if(list2==NULL){
           return list1;
       }
       if(list1->val < list2->val ){
           list1->next = merge(list1->next,list2);
           return list1;
       }else{
           list2->next = merge(list1,list2->next);
           return list2;
       }
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }else if(lists.size()==1){
            return lists[0];
        }
        ListNode* result = merge(lists[0],lists[1]);
        for(int i=2;i<lists.size();i++){
            result = merge(result,lists[i]);
        }
        return result;
    }
};