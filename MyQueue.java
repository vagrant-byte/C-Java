class Node {
    private int val;
    private Node next;
    public Node(int val) {
        this.val=val;
    }

    public int getVal() {
        return val;
    }

    public void setVal(int val) {
        this.val = val;
    }

    public Node getNext() {
        return next;
    }

    public void setNext(Node next) {
        this.next = next;
    }
}
public class MyQueue {
    private Node first;//头指针
    private Node last;//尾指针
    //入队
    public void offer(int val) {
        //判断堆是否是第一次插入
        Node node=new Node(val);
        if(first==null) {
            this.first=node;
            this.last=node;
        }
        this.last.setNext(node);
        this.last=this.last.getNext();
    }
    public int poll() {
        //判断是否为空
        if(isEmpty()) {
            throw new UnsupportedOperationException("队列为空");
        }
        int ret=this.first.getVal();
        this.first=this.first.getNext();
        return ret;
    }
    public int peek() {
        if(isEmpty()) {
            throw new UnsupportedOperationException("队列为空");
        }
        return this.first.getVal();
    }
    public boolean isEmpty() {
        if(this.first==null) {
            return true;
        }
        return false;
    }
}
