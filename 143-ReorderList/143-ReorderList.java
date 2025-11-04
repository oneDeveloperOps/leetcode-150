// Last updated: 11/4/2025, 7:50:24 AM
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
    public void reorderList(ListNode head) {
        List<ListNode> node = new ArrayList<>();
        List<ListNode> finalList = new ArrayList<>();
        ListNode temp = head;
        while (temp != null) {
            node.add(temp);
            temp = temp.next;
        }

        int l = 0;
        int r = node.size() -1;

        while (l <= r) {
            finalList.add(node.get(l++));
            finalList.add(node.get(r--));
        }

          for (ListNode n : finalList) {
            System.out.println(n.val);
          }

        for (int i = 0; i < finalList.size() - 1; i++) {
            finalList.get(i).next = finalList.get(i+1);
        }

        if (finalList.size() > 0) {
            finalList.get(finalList.size() - 1).next = null;
        }
        
    }
}