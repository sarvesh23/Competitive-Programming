
class Node {
    public int data;
    public Node next;
    public Node prev;

    Node() {
        this.data = 0;
        this.next = null;
        this.prev = null;
    }

    Node(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }

    Node(int data, Node next) {
        this.data = data;
        this.next = next;
        this.prev = next;
    }
};

public class InsertLLstart {
    public static Node insertAtFirst(Node list, int newValue) {
        // Write your code here

        Node newNode = new Node(newValue, list);
        list = newNode;
        return list;
    }
}
