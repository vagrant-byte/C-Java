public class TestDemo6 {
    //合并两个链表
    public static LastNode mergeTwoLists(LastNode headA, LastNode headB) {
        LastNode newHead=new LastNode(-1);
        LastNode tmp=newHead;
        while (headA!=null&&headB!=null) {
            if(headA.date<headB.date) {
                tmp.next=headA;
                headA=headA.next;
                tmp=tmp.next;
            } else {
                tmp.next=headB;
                headB=headB.next;
                tmp=tmp.next;
            }
        }
        if(headB==null) {
            tmp.next=headA;
        } else {
            tmp.next=headB;
        }
        return newHead.next;
    }
    public static LastNode getIntersectionNode(LastNode headA, LastNode headB) {
        int lenA=0;
        int lenB=0;
        LastNode pl=headA;//pl存较长链表
        LastNode ps=headB;
        while (pl!=null) {
            lenA++;
            pl=pl.next;
        }
        while (ps!=null) {
            lenB++;
            ps=ps.next;
        }
        pl=headA;
        ps=headB;
        int len=lenA-lenB;
        if(len<0) {
            pl=headB;
            ps=headA;
            len=lenB-lenA;
        }
        while (len!=0) {
            pl=pl.next;
            len--;
        }
        while (pl!=ps) {
            pl=pl.next;
            ps=ps.next;
        }
        if(pl==null) {
            return null;//无交点
        }
        return pl;
    }
    public static void creteCut(LastNode headA,LastNode headB) {
        headA.next.next=headB.next.next;
    }
    public static void main(String[] args) {
        MyLinkedList2 myLinkedList2=new MyLinkedList2();
        //myLinkedList2.addFirst(2);
        myLinkedList2.addFirst(7);
        myLinkedList2.addFirst(6);
        myLinkedList2.addFirst(4);
        myLinkedList2.addFirst(2);
        myLinkedList2.addFirst(1);
        MyLinkedList2 myLinkedList21=new MyLinkedList2();
        myLinkedList21.addFirst(37);
        myLinkedList21.addFirst(36);
        myLinkedList21.addFirst(35);
        myLinkedList21.addFirst(3);
        creteCut(myLinkedList2.head,myLinkedList21.head);
        LastNode ret=getIntersectionNode(myLinkedList2.head,myLinkedList21.head);
        System.out.println(ret.date);
    }
}
