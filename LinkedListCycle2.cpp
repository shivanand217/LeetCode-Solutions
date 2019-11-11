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
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode *slow = head, *fast = head;
        ListNode *cycleNode = NULL;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                break;
            }
        }
        if(fast == NULL || fast->next == NULL){
            return NULL;
        }
        ListNode *temp1 = slow, *temp2 = head;
        
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};