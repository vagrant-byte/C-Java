class LastNode {
    public int date;
    public LastNode next;
    public LastNode(int date) {
        this.date=date;
    }
}
public class MyLinkedList2 {
    LastNode head=null;
    //头插
    public void addFirst(int date) {
        LastNode node=new LastNode(date);
        node.next=head;
        head=node;
    }
    //尾插
    public void addLast(int date) {
        LastNode node=new LastNode(date);
        LastNode cur=this.head;
        if(this.head==null) {
            head=node;
        } else {
            //找尾
            while (cur.next!=null) {
                cur=cur.next;
            }
            cur.next=node;
            cur=node;
        }
    }
    //找前一个节点
    public LastNode findIndexSubOne(int index) {
       LastNode cur=this.head;
        while (index!=0) {
           cur=cur.next;
           index--;
       }
        return cur;
    }
    //任意位置插入
    public void addIndex(int index,int date) {
        LastNode node=new LastNode(date);
        if(index<0||index>size()) {
            System.out.println("插入位置不合法");
            return;
        }
        if(index==0) {
            addFirst(date);
            return;
        }
        if(index==size()) {
            addLast(date);
            return;
        }
        LastNode cur=findIndexSubOne(index-1);
        node.next=cur.next;
        cur.next=node;
    }
    //找是否包含关键字key
    public boolean contains(int key) {
        LastNode cur=this.head;
        while (cur!=null) {
            if(cur.date==key) {
                return true;
            }
            cur=cur.next;
        }
        return false;
    }
    //找key 的前一个节点
    public LastNode searchPrev(int key) {
        LastNode prev=this.head;
        while (prev.next!=null) {
            if(prev.next.date==key) {
                return prev;
            }
            prev=prev.next;
        }
        return null;
    }
    //删除第一次出现关键字key的节点
    public void remove(int key) {
        if(this.head.date==key) {
            this.head=this.head.next;
            return;
        }
        LastNode prev=searchPrev(key);
        if(prev==null) {
            System.out.print("没有要删除的节点");
        } else {
            prev.next=prev.next.next;
        }
    }
    //删除所有值为key的节点
    public void removeAllKey(int key) {
        LastNode prev=this.head;
        LastNode cur=this.head.next;
        while (cur!=null) {
            if(cur.date==key) {
                prev.next=cur.next;
                cur=cur.next;
            } else {
                prev=cur;
                cur=cur.next;
            }
        }
        if(this.head.date==key) {
            this.head=this.head.next;
        }
    }
    //链表长度
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
            System.out.print(cur.date+" ");
            cur=cur.next;
        }
    }
    public void display2(LastNode newHead) {
        LastNode cur=newHead;
        while (cur!=null) {
            System.out.print(cur.date+" ");
            cur=cur.next;
        }
    }
    //清空链表
    public void clear() {
        this.head=null;
    }
    //反转链表
    public LastNode reverseList() {
        LastNode prev=null;
        LastNode cur=this.head;
        if(this.head.next==null) {
            return this.head;
        } else {
            while (cur!=null) {
                LastNode curNest=cur.next;
                cur.next=prev;
                prev=cur;
                cur=curNest;
            }
        }
        return prev;
    }
    //链表中间节点
    public LastNode middleNode() {
        LastNode fast=this.head;
        LastNode slow=this.head;
        while (fast!=null&&fast.next!=null) {
            fast=fast.next.next;
            slow=slow.next;
        }
            return slow;
    }
    //链表倒数第K个节点
    public LastNode FindKthToTail(int k) {
        if(k<0||head==null) {
            return null;
        }
        LastNode fast=this.head;
        LastNode slow=this.head;
        while (k-1!=0) {
            if(fast!=null) {
                fast=fast.next;
                k--;
            } else {
                return null;
            }
        }
        while (fast!=null&&fast.next!=null) {
            fast=fast.next;
            slow=slow.next;
        }
        return slow;
    }
    //删除链表重复节点
    public LastNode deleteDuplication() {
        LastNode cur=this.head;
        LastNode newHead=new LastNode(0);
        LastNode tmp=newHead;
        while (cur!=null) {
            if(cur.next!=null&&cur.date==cur.next.date) {
                while (cur.next!=null&&cur.date==cur.next.date) {
                      cur=cur.next;
                }
                cur=cur.next;
            } else {
                tmp.next=cur;
                tmp=tmp.next;
                cur=cur.next;
            }
            tmp.next=null;
        }
        return newHead.next;
    }
    //分割链表
    public LastNode partition(int x) {
        LastNode bs=null;
        LastNode be=null;
        LastNode as=null;
        LastNode ae=null;
        while (this.head!=null) {
            if(head.date<x) {
                //第一次插入
                if(bs==null) {
                    bs=head;
                    be=head;
                } else {
                    be.next=head;
                    be=be.next;
                }
            } else {
                if(as==null) {
                    as=head;
                    ae=head;
                } else {
                    ae.next=head;
                    ae=ae.next;
                }
            }
            head=head.next;
        }
        if(bs==null) {
            return as;
        }
        be.next=as;
        if(as!=null) {
            ae.next=null;
        }
        return bs;
    }
    //回文结构
    public boolean chkPalindrome() {
        LastNode fast=this.head;
        LastNode slow=this.head;
        //找中间节点
        while (fast!=null&&fast.next!=null) {
            fast=fast.next.next;
            slow=slow.next;
        }
        //反转
        LastNode cur=slow.next;
        while (cur!=null) {
            LastNode curNext=cur.next;
            cur.next=slow;
            slow=cur;
            cur=curNext;
        }
        while (head!=slow) {
           if(head.date!=slow.date) {
               return false;
           }
           if(head.next==slow) {
               return true;
           }
           head=head.next;
           slow=slow.next;
        }
        return true;
    }
    public void createLoop() {
        LastNode cur=this.head;
        while (cur.next!=null) {
            cur=cur.next;
        }
        cur.next=head.next.next;
    }
    //环形链表
    public boolean hasCycle() {
        LastNode fast=this.head;
        LastNode slow=this.head;
        while (fast!=null&&fast.next!=null) {
            fast=fast.next.next;
            slow=slow.next;
            if(fast==slow) {
                return true;
            }
        }
        return false;
    }
    //环形链表 给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
    public LastNode detectCycle()
    {
        LastNode fast=this.head;
        LastNode slow=this.head;
        while (fast!=null&&fast.next!=null) {
            fast=fast.next.next;
            slow=slow.next;
            if(fast==slow) {
                break;
            }
        }
        if(fast==null||fast.next==null) {
            return null;
        }
        slow=this.head;
        while (fast!=slow) {
            fast=fast.next;
            slow=slow.next;
        }
        return fast;
    }
    //二进制链表转整数
    public int getDecimalValue() {
        LastNode cur=this.head;
        int ans=0;
        while (cur!=null) {
            ans=ans*2+cur.date;
            cur=cur.next;
        }
        return ans;
    }
}
