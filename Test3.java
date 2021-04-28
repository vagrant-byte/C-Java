class ListNode {
    public int val;
    public ListNode next;
    public ListNode head;
    public ListNode(int val) {
        this.val=val;
    }
    public void addFirst(int data) {
        ListNode node=new ListNode(data);
        node.next=head;
        head=node;
    }
    public void removeElements (int val){
        ListNode node = new ListNode(val);
        ListNode cur = head;
        //找val下标
        int count = 0;
        if (node == head) {
            head = head.next;
        }
        while (cur != null) {
            while (cur.val != val) {
                count++;
            }
            //找val的前一个节点
            for (int i = 0; i < count - 1; i++) {
                cur = cur.next;
            }
            cur.next = node.next;
        }
    }
    public void printf() {
        ListNode cur=this.head;
        while (cur!=null) {
            System.out.print(cur.val+" ");
            cur=cur.next;
        }
    }
}
public class Test3 {
    public static void main(String[] args) {
        ListNode listNode=new ListNode(2);
        listNode.addFirst(1);
        listNode.addFirst(3);
        listNode.addFirst(5);
        listNode.addFirst(7);
        listNode.addFirst(4);
        listNode.addFirst(4);
        listNode.addFirst(9);
        listNode.removeElements(4);
        listNode.printf();
    }
}
