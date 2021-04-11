import java.util.Scanner;

public class HomeWork2 {
    //求阶乘
    public static int fac(int n) {
        if(n==1) {
            return 1;
        }
        return n*fac(n-1);
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int ret=fac(n);
        System.out.println(ret);
    }
    //递归求和
    public static int sum(int n) {
        if (n==1) {
            return 1;
        } else {
            return n+sum(n-1);
        }
    }
    public static void main6(String[] args) {
        int n=10;
        int ret=sum(10);
        System.out.println(ret);
    }
    public static int fib(int n) {
        if (n==1 ||n==2) {
            return 1;
        } else {
            return fib(n-1)+fib(n-2);
        }
    }
    public static void main4(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int ret=fib(n);
        System.out.println(ret);
    }
    //青蛙跳台阶
    public static int jumpFloor(int n) {
        if (n==1 || n==2) {
            return n;
        } else {
            return jumpFloor(n-1)+jumpFloor(n-2);
        }
    }
    public static void main3(String[] args) {
        System.out.println(jumpFloor(3));
        System.out.println(jumpFloor(4));
        System.out.println(jumpFloor(5));
    }
    //汉诺塔
    public static void hanoi(int n,char pos1,char pos2,char pos3) {
        if(n==1) {
            move(pos1,pos3);
        } else {
            hanoi(n-1,pos1,pos3,pos2);
            move(pos1,pos3);
            hanoi(n-1,pos2,pos1,pos3);
        }
    }
    public static void move(char pos1,char pos2) {
        System.out.print(pos1+"->"+pos2+" ");
    }

    public static void main2(String[] args) {
        hanoi(1,'A','B','C');
        hanoi(2,'A','B','C');
        hanoi(3,'A','B','C');
        hanoi(4,'A','B','C');

    }
    //打印每一位并相加求和
    public static int printSum(int n) {
        if (n<=9) {
            return n;
        }
        return printSum(n/10)+n%10;
    }
    public static void main5(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int ret=printSum(num);
        System.out.println(ret);
    }
    //打印每一位
    public static void print(int n) {
        if(n>=9) {
            print(n/10);
        }
        System.out.println(n%10);
    }
    public static void main1(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        print(n);
    }
}
