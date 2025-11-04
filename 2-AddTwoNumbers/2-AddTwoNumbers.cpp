// Last updated: 11/4/2025, 7:50:50 AM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         ListNode *dummy_node = new ListNode(0);
        ListNode *l3 = dummy_node;
        int carry = 0;
        int sum = 0;
        vector<int> v;
       while(l1 != NULL || l2 != NULL) {
            int sumL1 = l1 != NULL ? l1->val : 0;
            int sumL2 = l2 != NULL ? l2->val : 0;
            sum =  sumL1 + sumL2;
            v.push_back(sum);
            if(l1 != NULL) l1 = l1 -> next;
            if(l2 != NULL) l2 = l2 -> next;
        }
        int first = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] > 9 && (i == v.size() - 1)) {
                int lastdig = v[i] % 10;
                first = v[i] / 10;
                v[i] = lastdig;
                v.push_back(first);
                ListNode *newNode = new ListNode(lastdig);
                l3->next = newNode;
                l3 = l3 -> next;
            }else if(v[i] > 9) {
                int lastdig = v[i] % 10;
                first = v[i] / 10;
                v[i] = lastdig;
                v[i+1] += first;
                ListNode *newNode = new ListNode(lastdig);
                l3->next = newNode;
                l3 = l3 -> next;
            }else {
                ListNode *newNode = new ListNode(v[i]);
                l3->next = newNode;
                l3 = l3 -> next;
            }
        }
        return dummy_node->next;
    }
};



