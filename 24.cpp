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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next){
            return head;
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        head = head->next;
        while(true){
            prev->next = curr->next;
            curr->next = prev;
            ListNode* temp = prev->next;
            if (!temp){
                break;
            }
            if(!temp->next){
                break;
            }
            prev->next = temp->next;
            prev = temp;
            curr = prev->next;
            
        }
        return head;
    }
};
