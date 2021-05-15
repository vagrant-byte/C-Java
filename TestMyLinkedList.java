class Node {
    public int val;
    public Node prev;
    public Node next;
    public Node(int val) {
        this.val=val;
    }
}
public class TestMyLinkedList {
    public Node newHead=new Node(-1);
    public Node tail;
    //头插法
    public void addFirst(int data) {
        Node node=new Node(data);
        if(this.newHead.next==null) {
            this.newHead.next=node;
            node.prev=this.newHead;
            this.tail=node;
        } else {
            node.next=this.newHead.next;
            node.prev=this.newHead;
            this.newHead.next=node;
        }
    }
    //尾插法
    public void addLast(int data) {
        Node node=new Node(data);
        if(this.newHead.next==null) {
            this.newHead.next=node;
            node.prev=this.newHead;
            this.tail=node;
        } else {
            node.prev=this.tail;
            this.tail.next=node;
            this.tail=node;
        }
    }
    public Node searchIndex(int index) {
        Node cur=this.newHead.next;
        while (index!=0) {
            cur=cur.next;
            index--;
        }
        return cur;
    }
    //任意位置插入,第一个数据节点为0号下标
    public void addIndex(int index,int data) {
        if(index<0||index>size()) {
            System.out.println("char位置不合法");
            return;
        }
        if(index==0) {
            addFirst(data);
            return;
        }
        if(index==size()) {
            addLast(data);
            return;
        }
        Node cur=searchIndex(index);
        Node node=new Node(data);
        node.next=cur;
        node.prev=cur.prev;
        cur.prev.next=node;
        cur.prev=node;
    }
    //查找是否包含关键字key是否在单链表当中
    public boolean contains(int key) {
        Node cur=this.newHead.next;
        while (cur!=null) {
            if(cur.val==key) {
                return true;
            }
            cur=cur.next;
        }
        return false;
    }
    //删除第一次出现关键字为key的节点
    public void remove(int key) {
        Node cur=this.newHead.next;
        while (cur!=null) {
            if(cur.val==key) {
                if(cur==this.newHead.next) {
                    this.newHead.next=this.newHead.next.next;
                    this.newHead.next.prev=this.newHead;
                } else {
                    if(cur==this.tail) {
                        cur.prev.next=cur.next;
                        this.tail=cur.prev;
                    } else {
                        cur.prev.next=cur.next;
                        cur.next.prev=cur.prev;
                    }
                }
                return;
            } else {
                cur=cur.next;
            }
        }
    }
    //删除所有值为key的节点
    public void removeAllKey(int key) {
        Node cur=this.newHead.next;
        while (cur!=null) {
            if(cur.val==key) {
                if(cur==this.newHead.next) {
                    this.newHead.next=this.newHead.next.next;
                    this.newHead.prev=this.newHead;
                } else {
                    if(cur==this.tail) {
                        cur.prev.next=cur.next;
                        this.tail=cur.prev;
                    } else {
                        cur.prev.next=cur.next;
                        cur.next.prev=cur.prev;
                    }
                }
                cur=cur.next;
            } else {
                cur=cur.next;
            }
        }
    }
    //得到单链表的长度
    public int size() {
        int count=0;
        Node cur=this.newHead.next;
        while (cur!=null) {
            count++;
            cur=cur.next;
        }
        return count;
    }
    public void display() {
        Node cur=this.newHead.next;
        while (cur!=null) {
            System.out.print(cur.val+" ");
            cur=cur.next;
        }
        System.out.println();
    }
    public void clear() {
        Node cur=this.newHead.next;
        while (cur!=null) {
            Node curNext=cur.next;
            cur.prev=null;
            cur.next=null;
            cur=curNext;
        }
        this.newHead=null;
        this.tail=null;
    }
}
