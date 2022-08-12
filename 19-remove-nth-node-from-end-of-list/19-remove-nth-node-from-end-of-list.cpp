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
        ListNode *p = head, *temp = head, *t = NULL;
int count=1;

    if(head->next == NULL)
        return NULL;
    
    while(p->next != NULL){
        
        p = p->next;
        count++;
        if(count > n){
            t = temp;
            temp = temp->next;
        }      
    }
   
    if(temp == head)
        return head = head->next;
    t->next = temp->next;
    return head;
    }
};