import java.util.ArrayList;
import java.util.List;
//数组实现循环队列
public class QueueArray {
    private int[] array=new int[100];
    private int head=0;
    private int tail=0;
    private int size=0;
    //入队
    public void offer(int val) {
        //队列已满 不能进行入队操作
        if(size==array.length) {
            return;
        }
        array[tail]=val;
        tail++;
        //tail++ 之后如果超出数组范围，就从头开始
        if(tail>=array.length) {
            tail=0;
        }
        size++;
    }
    //出队
    public Integer poll() {
        if(size==0) {
            return null;//队列为空
        }
        int ret=array[head];
        head++;
        if(head>=array.length) {
            head=0;
        }
        size--;
        return ret;
    }
    public Integer peek() {
        if(size==0) {
            return null;
        }
        return array[head];
    }
}
