
class Node {
    public int data;
    public Node next;

    Node() {
        this.data = 0;
        this.next = null;
    }

    Node(int data) {
        this.data = data;
        this.next = null;
    }

    Node(int data, Node next) {
        this.data = data;
        this.next = next;
    }
};

public class DeleteLLend {
    public static Node deleteLast(Node list) {
        // Write your code here
        Node temp = list;

        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
        temp = null;

        return list;
    }
}
