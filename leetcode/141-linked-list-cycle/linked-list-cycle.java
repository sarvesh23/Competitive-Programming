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
    public boolean hasCycle(ListNode head) {
        if(head==null|| head.next==null)
        {
            return false;
        }
       
        else
        {
            ListNode temp=head;
            ListNode temp2=head.next;
            while(temp2!=null && temp2.next!=null)
            {
                if(temp==temp2)
                    return true;
               temp=temp.next;
               temp2=temp2.next.next;
            }
            return false;

        }
       
    }
}