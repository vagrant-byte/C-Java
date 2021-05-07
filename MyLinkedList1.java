class LastNode {
    public int data;
    public LastNode next;
    public  LastNode(int data) {
        this.data=data;
    }
}
public class MyLinkedList1 {
    public LastNode head;
    //头插
    public void addFirst(int data) {
        LastNode node=new LastNode(data);
        this.head.next=node;
        head=node;
    }
    //尾插
    public void addLast(int data) {
        LastNode node=new LastNode(data);
        LastNode cur=this.head;
        //判断链表是否为空
        if(this.head==null) {
            this.head=node;
            return;
        }
        //找尾
        while (cur.next!=null) {
            cur=cur.next;
        }
        cur.next=node;

    }
    //找前一个节点
    public LastNode findIndexSubOne(int index) {
        LastNode cur=this.head;
        while (index!=0) {
            cur=cur.next;
            index++;
        }
        return cur;
    }
    //任意位置插入
    public void addIndex(int index,int data) {
        //判断插入位置是否合法
        if(index<0||index>size()) {
            System.out.println("插入位置不合法");
            return;
        }
        LastNode node=new LastNode(data);
        //头插
        if(index==0) {
            addFirst(data);
        }
        //尾插
        if(index==size()) {
            addLast(data);
        }
        LastNode cur=findIndexSubOne(index-1);
        node.next=cur.next;
        cur.next=node;
    }
    //查找是否包含关键字key
    public boolean contains(int key) {
        LastNode cur=this.head;
        while (cur!=null) {
            if(cur.data==key) {
                return true;
            }
            cur=cur.next;
        }
        return false;
    }
    //找关键字的前一个节点
    public LastNode searchPrev(int key) {
        LastNode prev=this.head;
        while (prev.next!=null) {
            if(prev.next.data==key) {
                return prev;
            }
            prev=prev.next;
        }
        return null;
    }
    //删除第一次出现关键字key的节点
    public void remove(int key) {
        //链表为空
        if(this.head==null) {
            return;
        }
        //头节点为要删除节点
        if(this.head.data==key) {
            this.head=this.head.next;
        }
        //判断前一个节点是否存在
        LastNode prev=searchPrev(key);
        if(prev==null) {
            System.out.println("无要删除节点");
        } else {
            //删除
            LastNode cur=prev.next;
            prev.next=cur.next;
        }
    }
    //删除所有值为key的节点
    public void removeAllKey(int key) {
        LastNode prev=this.head;
        LastNode cur=this.head.next;
        while (cur!=null) {
            if(cur.data==key) {
                prev.next=cur.next;
                cur=cur.next;
            } else {
                prev=cur;
                cur=cur.next;
            }
        }
        //删除位置在头
        if(this.head.data==key) {
            this.head=this.head.next;
        }
    }
    //得到链表长度
    public int size() {
        LastNode cur=this.head;
        int count=0;
        while (cur!=null) {
            count++;
            cur=cur.next;
        }
        return count;
    }
    //打印链表
    public void display() {
        LastNode cur=this.head;
        while (cur!=null) {
            System.out.print(cur.data+" ");
            cur=cur.next;
        }
    }
    //清空链表
    public void clear() {
        this.head=null;
    }
}
