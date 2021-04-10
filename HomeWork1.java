import java.util.Scanner;

public class HomeWork {
    //求最大值
    public static int max1(int x,int y) {
        int max= x > y ? x : y;
        return max;
    }
    public  static int max2(int a,int b,int c) {
       int tmp=max1(a,b);
       int max=tmp > c ? tmp : c;
       return max;
    }
    public static void main(String[] args) {
        int a=10;
        int b=20;
        int c=5;
        int max=max2(a,b,c);
        System.out.println(max);
    }
    public static int fac(int n) {
        int tmp=1;
        for (int i = 1; i <=n ; i++) {
            tmp*=i;
        }
        return tmp;
    }
    public static void main4(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int ret=fac(n);
        System.out.println(ret);
    }

    //求阶乘的和
    public static int facSum(int n) {
        int sum=0;
        for (int i = 1; i <=n ; i++) {
            sum+=fac(i);
        }
        return sum;
    }
    /*public static int fac(int n) {
        int tmp=1;
        for (int i = 1; i <=n ; i++) {
            tmp*=i;
        }
        return tmp;
    }*/
    public static void main3(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int sum=facSum(num);
        System.out.println(sum);
    }
    //斐波那契数列
    public static int fib(int n) {
        if (n<=2) {
            return 1;
        } else {
            return fib(n-1)+fib(n-2);
        }
    }
    public static void main2(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int num=fib(n);
        System.out.println(num);
    }
    public static void main1(String[] args) {
        int data[]={1,1,2,3,3,2,4};
        int tmp=0;
        for (int i = 0; i <data.length ; i++) {
            tmp=tmp^data[i];
        }
        System.out.println(tmp);
    }
}
