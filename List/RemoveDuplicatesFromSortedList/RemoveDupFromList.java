/*
class ListNode {
    private int val;
    private ListNode next;
    ListNode(int vale) {
        this.val = val;
        this.next = next;
    }
}
*/


class Solution {
    public ListNode rmDup(ListNode head) {
        ListNode curr = head;
        while(curr != null) {
            while(!curr.next && curr.next.val == curr.val) {
                curr.next = curr.next.next; 
            } 
            curr = curr.next;
        }

        return head;
    }
}

