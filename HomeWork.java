
import java.util.Random;
import java.util.Scanner;
    public class HomeWork {
        //模拟登录
        public static void main(String[] args) {
            String password="aaa123";
            Scanner sc=new Scanner(System.in);
            int j=0;
            for (int i = j; i < 3; i++) {
                System.out.println("请输入密码");
                String n=sc.next();
                if (password.equals(n)) {
                    System.out.println("登陆成功");
                    break;
                } else {
                    j++;
                    System.out.println("输入错误，请重新输入,还有"+(3-j)+"次机会");
                }
            }
            if (j>=3) {
                System.out.println("三次输入错误，退出程序");
            }
        }
        //二进制中奇数位偶数位
        public static void main10(String[] args) {
            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();
            System.out.print("偶数位");
            for (int i = 0; i <31 ; i+=2) {
                System.out.print((n>>i)&1);
            }
            System.out.println();
            System.out.print("奇数位");
            for (int i = 1; i <32 ; i+=2) {
                System.out.print((n>>i)&i);
            }
        }
        public static void main9(String[] args) {
            Random random=new Random();
            int toGress=random.nextInt(100);
            Scanner sc=new Scanner(System.in);
            while(true) {
                System.out.println("请输入数字（1-100以内）");
                int num=sc.nextInt();
                if(num==toGress) {
                    System.out.println("恭喜你猜对了");
                    break;
                } else if (num<toGress) {
                    System.out.println("猜小了");
                } else {
                    System.out.println("猜大了");
                }
            }
        }
        //二进制中1的个数
        public static void main8(String[] args) {
            Scanner sc=new Scanner(System.in);
            int a=sc.nextInt();
            int count=0;
            int flag=1;
            while (flag!=0) {
                if ((a & flag) !=0) {
                    count++;
                }
                flag=flag<<1;
            }
            System.out.println(count);
        }
        //分数求和
        public static void main7(String[] args) {
            double sum=0;
            for (int i = 1; i <=100 ; i++) {
                if (i%2==0) {
                    sum=sum-1/(double)i;
                } else {
                    sum=sum+1/(double)i;
                }
            }
            System.out.println(sum);
        }
        //水仙花
        public static void main6(String[] args) {
            for (int i = 100; i <1000 ; i++) {
                int a=i%10;
                int b=i/10%10;
                int c=i/100;
                if(i==a*a*a+b*b*b+c*c*c) {
                    System.out.println(i);
                }
            }
        }
        //X图形
        public static void main5(String[] args) {
            Scanner sc = new Scanner(System.in);
            while (sc.hasNext()) {
                int a = sc.nextInt();
                for (int i = 0; i < a; i++) {
                    for (int j = 0; j < a; j++) {
                        if (j == i || j == a - i - 1) {
                            System.out.print("*");
                        } else {
                            System.out.print(" ");
                        }
                    }
                    System.out.println("");
                }
            }
        }
        //最小公约数
        public static void main4(String[] args) {
            int a=9;
            int b=3;
            int min=a<b?a:b;
            for(int i=2;i<=min;i++) {
                if(a%i==0 && b%i==0) {
                    System.out.println(i);
                }
            }
        }
        //按顺序输出每个位数
        public static void main3(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("请输入一个数");
            int n=sc.nextInt();
            while (n>0) {
                int a=n%10;
                System.out.println(a);
                n=n/10;
            }
        }
        public static void fun(int num) {
            if(num>9) {
                fun(num/10);
            }
            System.out.println(num%10);
        }
        public static void main2(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("请输入一个数");
            int n=sc.nextInt();
            fun(n);
        }
        //乘法口诀
        public static void main1(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("请输入一个数");
            int n=sc.nextInt();
            for (int i = 1; i <=n ; i++) {
                for (int j = 1; j <=i ; j++) {
                    System.out.print(j+"*"+i+"="+(j*i)+" ");
                }
                System.out.println();
            }
        }
    }


