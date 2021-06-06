import java.util.*;
//循环队列
class MyCircularQueue {
    private int[] elem;
    private int front;//队头
    private int rear;//队尾
//构造器，设置队列长度为 k
    public MyCircularQueue(int k) {
        elem=new int[k];
    }
//向循环队列插入一个元素。如果成功插入则返回真
    public boolean enQueue(int value) {
        if(isFull()) {
            return false;
        }
        this.elem[this.rear]=value;
        this.rear=(rear+1)%elem.length;
        return true;
    }
//从循环队列中删除一个元素。如果成功删除则返回真
    public boolean deQueue() {
        if(isEmpty()) {
            return false;
        }
        this.front=(front+1)%elem.length;
        return true;
    }
//从队首获取元素。如果队列为空，返回 -1
    public int Front() {
        if(isEmpty()) return -1;
        return this.elem[front];

    }
//获取队尾元素。如果队列为空，返回 -1
    public int Rear() {
        if(isEmpty()) return -1;
        int index=(this.rear==0) ? this.elem.length-1 : this.rear-1;
        return this.elem[index];
    }
//检查循环队列是否为空。
    public boolean isEmpty() {
        if(this.rear==this.front) {
            return true;
        }
        return false;
    }
//检查循环队列是否已满。
    public boolean isFull() {
        if((this.rear+1)%this.elem.length==this.front) {
            return true;
        }
        return false;
    }
}
//用队列实现栈
class MyStack {
    private Queue<Integer> s1;
    private Queue<Integer> s2;

    public MyStack() {
        s1=new LinkedList<>();
        s2=new LinkedList<>();
    }

    public void push(int x) {
        if(!s2.isEmpty()) {
            s2.offer(x);
        } else {
            s1.offer(x);
        }
    }

    public int pop() {
        if(empty()) return -1;
        if(!s1.isEmpty()) {
            int size=s1.size();
            for (int i = 0; i <size-1 ; i++) {
                int x=s1.poll();
                s2.offer(x);
            }
            return s1.poll();
        } else {
            int size=s2.size();
            for (int i = 0; i <size-1 ; i++) {
                int x=s2.poll();
                s1.offer(x);
            }
            return s2.poll();
        }
    }

    public int top() {
        if(empty()) return -1;
        if(!s1.isEmpty()) {
            int x=-1;
            for (int i = 0; i <s1.size()-1 ; i++) {
                x=s1.poll();
                s2.offer(x);
            }
            return x;
        } else {
            int x=-1;
            for (int i = 0; i <s2.size()-1 ; i++) {
                x=s2.poll();
                s1.offer(x);
            }
            return x;
        }
    }

    public boolean empty() {
        return s1.isEmpty()&&s2.isEmpty();
    }
}
//用栈实现队列
class MyQueue {
    private Stack<Integer> s1;
    private Stack<Integer> s2;

    public MyQueue() {
        s1=new Stack<>();
        s2=new Stack<>();
    }
    public void push(int x) {
        s1.push(x);
    }
    public int pop() {
        if(empty()) return -1;
        if(s2.empty()) {
            while (!s1.empty()) {
                int x=s1.pop();
                s2.push(x);
            }
        }
        return s2.pop();
    }
    public int peek() {
        if(empty()) return -1;
        if(s2.empty()) {
            while (!s1.empty()) {
                int x=s1.pop();
                s2.push(x);
            }
        }
        return s2.peek();
    }
    public boolean empty() {
        return s1.empty()&&s2.empty();
    }

}
class test1{
    //括号匹配问题
    public boolean isValid(String s) {
        if(s==null||s.length()==0) {
            return true;
        }
        Stack<Character> s1 = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);
            if (ch == '(' || ch == '[' || ch == '{') {
                s1.push(ch);
            } else {
                //栈中无左括号
                if (s1.empty()) {
                    System.out.println("右括号多了");
                    return false;
                }
                char tmp = s1.peek();
                if (ch == ')' && tmp == '(' || ch == ']' && tmp == '[' || ch == '}' && tmp == '{') {
                    s1.pop();//出栈
                } else {
                    System.out.println("左右括号不匹配");
                    return false;
                }
            }
        }
        if (!s1.empty()) {
            System.out.println("左括号多了");
            return false;
        }
        return true;
    }
}
public class Stack1 {
    Queue<Integer> s=new LinkedList<>();
}
