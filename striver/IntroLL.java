
import java.util.*;

class Node {
    public int Data;
    public Node next;

    Node() {
        this.Data = 0;
        this.next = null;
    }

    Node(int data) {
        this.Data = data;
        this.next = null;
    }

    Node(int data, Node next) {
        this.Data = data;
        this.next = next;
    }

};

public class IntroLL {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int j = sc.nextInt();
        Node headNode = new Node(j, null);
        Node temp = headNode;
        for (int i = 1; i < n; i++) {
            int t = sc.nextInt();
            temp.next = new Node(t, null);
            temp = temp.next;
        }
        temp = headNode;
        while (temp != null) {
            System.out.println(temp.Data);
            temp = temp.next;
        }
        sc.close();
    }
}
