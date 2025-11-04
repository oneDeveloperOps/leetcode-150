// Last updated: 11/4/2025, 7:49:50 AM
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {

        List<ListNode> node = new ArrayList<>();

        if (head != null && head.next == null) {
           return null;
        }

        ListNode temp = head;

        while (temp != null) {
            node.add(temp);
            temp = temp.next;
        }

        if (node.size() == 2) {
            node.get(0).next = null;
            return head;
        }

        int mid = node.size() / 2;

        if (mid > 0) {
            ListNode t = node.get(mid).next;
            node.get(mid-1).next = t;
        }

        return head;
    }
}