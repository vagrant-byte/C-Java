import java.util.ArrayList;
import java.util.List;

class MyLinkedList {
    public int val;
    public MyLinkedList next;

    public MyLinkedList(int val) {
        this.val = val;
    }
    public MyLinkedList head;

    /** Initialize your data structure here. */
    public MyLinkedList() {
        MyLinkedList myLinkedList=new MyLinkedList();
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    public int get(int index) {
        MyLinkedList cur=this.head;
        int count=0;
        while (cur!=null) {
            count++;
            cur=cur.next;
        }
        if(index<0||index>count) {
            return -1;
        }
        if(index>0) {
            cur=cur.next;
            index--;
        }
        return cur.val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    public void addAtHead(int val) {
        MyLinkedList node=new MyLinkedList(val);
        this.head.next=node;
        this.head=node;
    }

    /** Append a node of value val to the last element of the linked list. */
    public void addAtTail(int val) {
        MyLinkedList node=new MyLinkedList(val);
        if(this.head==null) {
            this.head=node;
            return;
        }
        MyLinkedList cur=this.head;
        while (cur.next!=null) {
            cur=cur.next;
        }
        cur.next=node;

    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    public void addAtIndex(int index, int val) {
        MyLinkedList cur=this.head;
        int count=0;
        while (cur!=null) {
            count++;
            cur=cur.next;
        }
        if(index<0||index>count) {
            return;
        }
        if(index==0) {
            addAtHead(val);
        }
        if(index==count) {
            addAtTail(val);
        }
        cur=this.head;
        while (index-1>0) {
            cur=cur.next;
            index++;
        }
        MyLinkedList node=new MyLinkedList(val);
        node.next=cur.next;
        cur.next=node;

    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    public void deleteAtIndex(int index) {
        MyLinkedList cur=this.head;
        int count=0;
        while (cur!=null) {
            count++;
            cur=cur.next;
        }
        if(index<0||index>count) {
            return;
        }
        cur=this.head;
        if(index==0) {
            this.head=this.head.next;
        }
        if(index==count) {
            while (index-1>0) {
                cur=cur.next;
                index--;
            }
            cur.next=null;
        }
        cur=this.head;
        while (index-1>0) {
            cur=cur.next;
            index--;
        }
        cur.next=cur.next.next;
    }
}
public class DailyOneProblem {
    //找到小镇法官
    public int findJudge(int N, int[][] trust) {
        int[] arr1 = new int[N + 1];
        int[] arr2 = new int[N + 1];
        for (int[] t : trust) {
            arr1[t[0]] += 1;
            arr2[t[1]] += 1;
        }
        for (int i = 1; i <=N; i++) {
            if (arr1[i] == 0) {
                return arr2[i] == N - 1 ? i : -1;
            }
        }
        return -1;
    }

    //二维数组迁移
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        while (k>0) {
            //同一行移动
            int[][] newGrid=new int[grid.length][grid[0].length];
            for (int i = 0; i <grid.length ; i++) {
                for (int j = 0; j <grid[0].length-1 ; j++) {
                    newGrid[i][j+1]=grid[i][j];
                }
            }
            //前一行移动
            for (int i = 0; i <grid.length-1 ; i++) {
                newGrid[i+1][0]=grid[i][grid[0].length-1];
            }
            //最后一行移动
            newGrid[0][0]=grid[grid.length-1][grid[0].length-1];
            grid=newGrid;
            k--;
        }
        List<List<Integer>> revers=new ArrayList<>();
        for (int[] row:grid) {
            List<Integer> listRow=new ArrayList<>();
            revers.add(listRow);
            for (int v:row)
                listRow.add(v);
        }
        return revers;
    }
    public static void main(String[] args) {

    }
}
