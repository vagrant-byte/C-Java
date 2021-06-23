//循环队列
public class MyCircularQueue {
    int[] array;
    int from=0;
    int tail=0;
    int size=0;
    public MyCircularQueue(int k) {
        array=new int[k];
    }
//向循环队列插入一个元素。如果成功插入则返回真。
    public boolean enQueue(int value) {
        //队列已满，无法插入
        if(size==array.length) {
            return false;
        }
        array[tail]=value;
        tail++;
        if(tail==array.length) {
            tail=0;
        }
        size++;
        return true;
    }
//deQueue(): 从循环队列中删除一个元素。如果成功删除则返回真。
    public boolean deQueue() {
        //队列为空 无删除元素
        if(size==0) {
            return false;
        }
        from++;
        if(from==array.length) {
            from=0;
        }
        size--;
        return true;
    }
//Front: 从队首获取元素。如果队列为空，返回 -1 。
    public int Front() {
        if(size==0) {
            return -1;
        }
        return array[from];

    }
//Rear: 获取队尾元素。如果队列为空，返回 -1 。
    public int Rear() {
        if(size==0) {
            return -1;
        }
        if(tail-1<0) {
            return array[array.length-1];
        }
        return array[tail-1];

    }
//isEmpty(): 检查循环队列是否为空。
    public boolean isEmpty() {
        if(size==0) {
            return true;
        }
        return false;
    }
//isFull(): 检查循环队列是否已满。
    public boolean isFull() {
        if(size==array.length) {
            return true;
        }
        return false;
    }
}
