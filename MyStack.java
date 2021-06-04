
import java.util.Arrays;


public class MyStack<T> {
    private T[] elem;//数组
    private int top;//栈顶指针
    public MyStack() {
        this.elem=(T[]) new Object[2];
    }
    //判断栈是否是满的
    public boolean isFull() {
        if(this.elem.length==top) {
            return true;
        }
        return false;
    }
    //入栈
    public void push(T item) {
        if(isFull()){
            this.elem = Arrays.copyOf(this.elem,2*this.elem.length);
        }
        //2、elem[top] = item  top++;
        this.elem[this.top++] = item;
    }
    public T pop() {
        if(empty()) {
            throw new  UnsupportedOperationException("栈为空");//自定义异常
        }
        T ret=this.elem[top-1];
        this.top--;
        return ret;
    }
    public T peek() {
        if(empty()) {
            throw new UnsupportedOperationException("栈为空");//自定义异常
        }
        T ret=this.elem[top-1];
        return ret;
    }
    public boolean empty() {
        return this.top==0;
    }
}
