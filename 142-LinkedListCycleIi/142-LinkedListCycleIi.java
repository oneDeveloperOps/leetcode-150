// Last updated: 11/4/2025, 7:50:25 AM
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode temp =head;
        HashSet<ListNode> set = new HashSet<>();
        while(temp != null) {
            if(set.contains(temp.next)) {
                return temp.next;
            }
            set.add(temp);
            temp = temp.next;
        }
        return null;
    }
}