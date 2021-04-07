import java.util.Scanner;

public class Test {
    //阶乘求和
    public static void main(String[] args) {
        int result=1;
        int sum=0;
        for (int i = 1; i <=5 ; i++) {
            for (int j = 1; j <=i ; j++) {
                result*=j;
            }
        }
        sum+=result;
        System.out.println(sum);
    }
    //计算阶乘
    public static void main5(String[] args) {
        int n=1;
        int result=1;
        while(n<=5) {
            result*=n;
            n++;
        }
        System.out.println(result);
    }
    //打印1-100数之和
    public static void main4(String[] args) {
        int sum=0;
        int n=0;
        while(n<=100) {
            sum=sum+n;
            n++;
        }
        System.out.println(sum);
    }
    //while 打印1-10
    public static void main3(String[] args) {
        int n=0;
        while(n<=10) {
            System.out.println(n);
            n++;
        }
    }
    //100以内奇数偶数和
    public static void main2(String[] args) {
        int sum=0;
        int sum1=0;
        for (int i = 0; i <100 ; i++) {
            if (i%2==0) {
                sum=sum+i;
            } else {
                sum1=sum1+i;
            }
        }
        System.out.println(sum+"奇数和");
        System.out.println(sum1+"偶数和");
    }
    //判断奇数偶数
    public static void main1(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        if (num%2==0) {
            System.out.println(num+"是奇数");
        } else {
            System.out.println(num+"是偶数");
        }
    }
}
