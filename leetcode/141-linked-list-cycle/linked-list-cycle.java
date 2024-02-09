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
        if(head==null)
        {
            return false;
        }
        else if(head.next==null)
        {
            return false;
        }
        else
        {
            ListNode temp=head;
            ListNode temp2=head.next;
            while(temp.next!=null && temp2.next!=null)
            {
                if(temp==temp2)
                    return true;
                if(temp.next!=null)
                    temp=temp.next;
                temp2=temp2.next;
                if(temp2.next!=null)
                    temp2=temp2.next;
            }
            return false;

        }
       
    }
}