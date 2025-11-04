// Last updated: 11/4/2025, 7:50:22 AM
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
    
    int Length(ListNode *head) {
        int count = 0;
        ListNode*temp = head;
        while(temp != NULL) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int lena = Length(headA);
        int lenb = Length(headB);
        if(lena < lenb) {
            for(int i = 0; i < lenb-lena; i++) {
                temp2 = temp2->next;
            }
        }else {
            for(int i = 0; i < lena-lenb; i++) {
                temp1 = temp1->next;
            }
        }
        while(temp1 != temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
};