
//https://takeuforward.org/linked-list/top-linkedlist-interview-questions-structured-path-with-video-solutions/
// Singly LinkedList (Basics) - Part 1
import java.util.*;

public class LinkedList {
    public static class Node {
        public int data;
        public Node next;

        Node() {
            this.data = 0;
            this.next = null;
        }

        Node(int Data) {
            this.data = Data;
            this.next = null;
        }

        Node(int Data, Node next) {
            this.data = Data;
            this.next = next;
        }
    }

    public static Node insert(Node head, int data) {
        Node newNode = new Node(data, null);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
        return head;
    }

    public static void display(Node head) {
        Node temp = head;
        if (head == null) {
            System.out.println("Nothing there");
        } else {

            while (temp != null) {
                System.out.println(temp.data);
                temp = temp.next;
            }
        }
    }

    public static void length(Node head) {
        Node temp = head;
        int n = 0;
        if (head == null) {
            System.out.println("Nothing there");
        } else {

            while (temp != null) {
                n++;
                temp = temp.next;
            }
        }
        System.out.println("Count is " + n);
    }

    public static void search(Node head, int n) {
        Node temp = head;

        if (head == null) {
            System.out.println("Nothing there");
        } else {

            while (temp != null) {
                if (n == temp.data) {
                    System.out.println(n);
                    return;
                }
                temp = temp.next;
            }
        }
        System.out.println("Not found");
    }

    public static Node del(Node head) {
        if (head == null) {
            System.out.println("Nothing to delete");
        } else {
            Node temp = head;
            head = head.next;
            temp = null;
        }
        return head;
    }

    public static Node deleteLast(Node list) {
        // Write your code here
        Node temp = list;
        if (temp.next == null) {
            temp = null;
            list = null;
        } else {
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
            temp = null;
        }
        return list;
    }

    public static Node Reverse(Node head) {
       if (head == null) {
            return head;
        } else if (head.next == null) {
            return head;
        } else {
            Node curr = head, prev = null, forw = null;
            while (curr != null) {
                forw = curr.next;
                curr.next = prev;
                prev = curr;
                curr = forw;
            }
            head = prev;
        }
        display(head);
        return head; 

    }
    public static Node sortLL(Node head) {
		Node head1=null;
        
		
	}

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Node head = null;
        for (int i = 0; i < n; i++) {
            int t = sc.nextInt();
            head = insert(head, t);
        }
        sc.close();
        // display(head);
        // length(head);
        // search(head, 6);
        // head = del(head);
        head = Reverse(head);
        display(head);
    }
}