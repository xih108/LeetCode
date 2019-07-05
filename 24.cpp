// 24. Swap Nodes in Pairs
// Given a linked list, swap every two adjacent nodes and return its head.

// You may not modify the values in the list's nodes, only nodes itself may be changed.

 

// Example:

// Given 1->2->3->4, you should return the list as 2->1->4->3.

// Swap two adjacent nodes, and set the prev next to the its next, then change prev to be the next one.
// (pretending each new prev as the head, no incoming link.)





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
