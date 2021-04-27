class ListNode {
    public int val;
    public ListNode next;
    //构造类
    public ListNode(int val) {
        this.val=val;
    }
}
public class MyLinkedList {
    public ListNode head;//标识整个链表的头
    //头插
    public void addFirst(int data) {
        ListNode node=new ListNode(data);
        node.next=head;
        head=node;
    }
    //尾插
    public void addLast(int data) {
        ListNode node=new ListNode(data);
        ListNode cur=this.head;
        //判断是否链表为空 是否是第一次插入
        if(this.head==null) {
            this.head=node;
        } else {
            //找尾
            while (cur.next!=null) {
                cur=cur.next;
            }
            //尾插
            cur.next=node;
        }
    }
    //任意位置插入
    public void addIndex(int index,int data) {
        if(index<0||index>this.size()) {
            System.out.println("index插入位置错误");
        }
        if(index==0) {
            this.addFirst(data);
        }
        if(index==this.size()) {
            this.addLast(data);
        }
        ListNode node=new ListNode(data);
        ListNode cur=findIndexSubOne(index);
        node.next=cur.next;
        cur.next=node;

    }
    //找index的前一个节点
    public ListNode findIndexSubOne(int index) {
        ListNode cur=this.head;
        for (int i = 0; i <index-1 ; i++) {
            cur=cur.next;
        }
        return cur;
    }
    //查找是否包含关键字key
    public boolean contains(int key) {
        ListNode cur=this.head;
        for (int i = 0; i <size() ; i++) {
            if(cur.val==key) {
                return true;
            }
            cur=cur.next;
        }
        return false;
    }
    //打印链表长度
    public int size() {
        int count=0;
        ListNode cur=this.head;
        while (cur!=null) {
            count++;
            cur=cur.next;
        }
        return count;
    }
    //打印链表
    public void printf() {
        ListNode cur=this.head;
        while (cur!=null) {
            System.out.print(cur.val+" ");
            cur=cur.next;
        }
        System.out.println();
    }
    //清空列表
    public void clear() {
        ListNode cur=this.head;
        while (cur!=null) {
            ListNode curNext=cur.next;
            cur.next=null;
            cur=curNext;
        }
        this.head=null;
    }
}
