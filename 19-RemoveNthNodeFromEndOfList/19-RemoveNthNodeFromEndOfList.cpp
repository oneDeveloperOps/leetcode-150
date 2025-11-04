// Last updated: 11/4/2025, 7:50:46 AM
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
        if (head == NULL) return NULL;

        ListNode* temp = head;
        int count = 0;
        while (temp != NULL && temp->next != NULL) {
            count++;
            temp = temp->next;
        }
        int nodeToBePicked = count - n;

        if (nodeToBePicked < 0) {
            return head->next;
        }
        
        ListNode* nodeX = head;
        int j = 0;
        while (j < nodeToBePicked) {
            nodeX = nodeX->next;
            j++;
        }
        nodeX->next = nodeX->next->next;
        return head;
        
    }
};