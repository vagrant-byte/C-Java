import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;
//猫狗收容所
class AnimalShelf {
    Queue<int []> cat;
    Queue<int []> dog;

    public AnimalShelf() {
        cat=new LinkedList<>();
        dog=new LinkedList<>();
    }

    public void enqueue(int[] animal) {
        if (animal[1]==0) {
           cat.offer(animal);
        }
        if(animal[1]==1) {
            dog.offer(animal);
        }
    }

    public int[] dequeueAny() {
        if(cat.isEmpty()&&dog.isEmpty()) return new int[] {-1,-1};
        if (cat.isEmpty()||dog.isEmpty()) {
            if(cat.isEmpty()) {
                return dog.poll();
            } else {
                return cat.poll();
            }
        }
        int[] tmp1=cat.peek();
        int[] tmp2=dog.peek();
        if(tmp1[0]<tmp2[0]) {
            return cat.poll();
        } else {
            return dog.poll();
        }
    }

    public int[] dequeueDog() {
        if(dog.isEmpty()) {
            return new int[] {-1,-1};
        } else {
            return dog.poll();
        }
    }

    public int[] dequeueCat() {
        if (cat.isEmpty()) {
            return new int[] {-1,-1};
        } else {
            return cat.poll();
        }

    }
}
//比较含退格的字符串
class Solution3 {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> stack1=new Stack<>();
        Stack<Character> stack2=new Stack<>();
        for (int i = 0; i <s.length() ; i++) {
            char ch=s.charAt(i);
            if(ch=='#') {
                if(!stack1.empty()) {
                    stack1.pop();
                }
            } else {
                stack1.push(ch);
            }
        }
        for (int i = 0; i <t.length() ; i++) {
            char ch=t.charAt(i);
            if(ch=='#') {
                if(!stack2.empty()) {
                    stack2.pop();
                }
            } else {
                stack2.push(ch);
            }
        }
        while (!stack1.empty()&&!stack2.empty()) {
            if(stack1.peek().equals(stack2.peek())) {
                stack1.pop();
                stack2.pop();
            } else {
                return false;
            }
        }
        return true;
    }
}
public class Stack3 {
}
