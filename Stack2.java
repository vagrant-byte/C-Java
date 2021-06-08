import java.util.*;
//栈的压入弹出序列
class Solution1 {
    public boolean IsPopOrder(int [] pushA,int [] popA) {
        Stack<Integer> stack=new Stack<>();
        int i=0;
        int j=0;
        for (i = 0; i <pushA.length ; i++) {
            stack.push(pushA[i]);
            while (!stack.empty()&&stack.peek()==popA[j]) {
                stack.pop();
                j++;
            }
        }
        return stack.empty();
    }
}
//逆波兰序列
class Solution {
  
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();
        for (int i = 0; i < tokens.length; i++) {
            String token = tokens[i];
            if(!token.equals("+")&&!token.equals("-")&&!token.equals("*")&&!token.equals("/")) {
                stack.push(Integer.parseInt(token));
            } else {
                int num1=stack.pop();
                int num2=stack.pop();
                switch (token) {
                    case "+":
                        stack.push(num1+num2);
                        break;
                    case "-":
                        stack.push(num1-num2);
                        break;
                    case "*":
                        stack.push(num1*num2);
                        break;
                    case "/":
                        stack.push(num1/num2);
                        break;
                }
            }
        }
        return stack.pop();
    }

    private boolean isNumber(String token) {
        return !("+".equals(token) || "-".equals(token) || "*".equals(token) || "/".equals(token));
    }
}
public class Stack2 {
    public static void main(String[] args) {
        LinkedList<Integer> linkedList=new LinkedList<>();

    }
}
