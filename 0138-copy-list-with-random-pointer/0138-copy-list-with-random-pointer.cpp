/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *current=head;
        map<Node*,Node*>mp;
        Node *temp;
        while(current!=NULL)
        {   temp=new Node(current->val);
            mp[current]=temp;
            current=current->next;
        }
        current=head;
        while(current!=NULL)
        {
            mp[current]->next=mp[current->next];
            mp[current]->random=mp[current->random];
            current=current->next;
        }
        return mp[head];
    }
};