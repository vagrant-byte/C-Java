import java.security.PublicKey;

class ListNode {
        public int val;
        public ListNode prev;
        public ListNode next;
        public ListNode(int val) {
                this.val=val;
        }
}
public class TestLinkedList {
        public ListNode head=null;
        public ListNode tail=null;
        //头插法
        public void addFirst(int data) {
                ListNode node=new ListNode(data);
                if(this.head==null) {
                        this.head=node;
                        this.tail=node;
                } else {
                        node.next=this.head;
                        this.head.prev=node;
                        head=node;
                }
        }
        //尾插法
        public void addLast(int data) {
                ListNode node=new ListNode(data);
                if(this.head==null) {
                        this.head=node;
                        this.tail=node;
                } else {
                        tail.next=node;
                        node.prev=tail;
                        tail=node;
                }

        }
        private ListNode searchIndex(int index) {
                ListNode cur=this.head;
                while (index!=0) {
                        cur=cur.next;
                        index--;
                }
                return cur;
        }
        //任意位置插入,第一个数据节点为0号下标
        public void addIndex(int index,int data) {
                if(index<0||index>size()) {
                        System.out.println("插入位置不合法");
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
                ListNode cur=searchIndex(index);
                ListNode node=new ListNode(data);
                cur.prev.next=node;
                node.prev=cur.prev;
                node.next=cur;
                cur.prev=node;
        }
        //查找是否包含关键字key是否在单链表当中
        public boolean contains(int key) {
                ListNode cur=this.head;
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
                ListNode cur=this.head;
                while (cur!=null) {
                        if(cur.val==key) {
                                if(cur==this.head) {
                                        this.head=this.head.next;
                                        this.head.prev=null;
                                } else {
                                        if(cur.next!=null) {
                                                cur.next.prev=cur.prev;
                                                cur.prev.next=cur.next;
                                        } else {
                                                cur.prev.next=cur.next;
                                                tail=cur.prev;
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
                ListNode cur=this.head;
                while (cur!=null) {
                        if(cur.val==key) {
                                //删除位置是头
                                if(cur==this.head) {
                                        this.head=this.head.next;
                                        if(this.head!=null) {
                                                this.head.prev=null;
                                        } else {
                                                this.tail=null;
                                        }

                                } else {
                                        if(cur.next!=null) {
                                                cur.next.prev=cur.prev;
                                                cur.prev.next=cur.next;
                                        } else {
                                                cur.prev.next=cur.next;
                                                this.tail=cur.prev;
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
                ListNode cur=this.head;
                while (cur!=null) {
                        count++;
                        cur=cur.next;
                }
                return count;

        }
        public void display() {
                ListNode cur=this.head;
                while (cur!=null) {
                        System.out.print(cur.val+" ");
                        cur=cur.next;
                }
                System.out.println();
        }
        public void clear() {
                ListNode cur=this.head;
                while (cur!=null) {
                        ListNode curNext=cur.next;
                        cur.next=null;
                        cur.prev=null;
                        cur=curNext;
                }
                this.tail=null;
                this.head=null;
        }
}
