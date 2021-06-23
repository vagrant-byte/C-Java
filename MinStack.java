import java.util.Stack;

//最小栈
public class MinStack {
    Stack<Integer> s1;
    Stack<Integer> s2;//最小栈
    public MinStack() {
        s1=new Stack<>();
        s2=new Stack<>();

    }
//push(x) —— 将元素 x 推入栈中。
    public void push(int val) {
        s1.push(val);
        if(s2.empty()) {
            s2.push(val);
            return;
        }
        int tmp=s2.peek();
        if(tmp>val) {
            tmp=val;
        }
        s2.push(tmp);
    }
//pop() —— 删除栈顶的元素。
    public void pop() {
        if(s1.empty()) {
            return;
        }
        s1.pop();
        s2.pop();

    }
//top() —— 获取栈顶元素。
    public Integer top() {
        if(s1.empty()) {
            return null;
        }
        return s1.peek();

    }
//getMin() —— 检索栈中的最小元素。
    public Integer getMin() {
        if(s2.empty()) {
            return null;
        }
        return s2.peek();

    }
}
