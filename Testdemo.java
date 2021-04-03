public class Testdemo {
    public static void main(String[] args) {
        int a=10;
        int b=20;
        System.out.println(a&b);
    }
    public static void main24(String[] args) {
        int a=10;
        int b=20;
        int c=30;
        System.out.println(a<b&&b<c);
    }
    public static void main23(String[] args) {
        int a=10;
        int b=++a;
        System.out.println(b);//11
        int c=a++;
        System.out.println(c);//11
    }
    public static void main22(String[] args) {
        double a=11.5;
        double b=2.0;
        System.out.println(a%b);
    }
    public static void main21(String[] args) {
        int a=1;
        int b=2;
        System.out.println(a/b);
    }
    public static void main20(String[] args) {
        String str="100";
        int num=Integer.parseInt(str);
    }
    public static void main19(String[] args) {
        int num=10;
        //方法一
        String str1=num+"";
        //方法二
        String str2=String.valueOf(num);
    }
    public static void main18(String[] args) {
        int a=0;
        double b=10.5;
        a=(int)b;
        System.out.println(a);
    }
    public static void main17(String[] args) {
        byte a=1;
        int b=a;
        System.out.println(b);
    }
    public static void main16(String[] args) {
        final int a=10;
        //a=20;
    }
    public static void main15(String[] args) {
        String a="hello";
        String b="world";
        String c=a+b;
        System.out.println(c);
    }
    public static void main14(String[] args) {
        String name="zhangsan";
        System.out.println(name);
    }
    public static void main13(String[] args) {
        boolean value=true;
        System.out.println(value);
    }
    public static void main12(String[] args) {
        short value=3;
        System.out.println(value);
    }
    public static void main11(String[] args) {
        byte value=1;
        System.out.println(value);
    }
    public static void main10(String[] args) {
        char ch='A';
        char ch1='刘';
        System.out.println(ch);
        System.out.println(ch1);
    }
    public static void main9(String[] args) {
        float num=1.0f;
        System.out.println(num);
    }
    public static void main8(String[] args) {
        double num=1.1;
        System.out.println(num*num);
    }
    public static void main7(String[] args) {
        long num = 10L;//定义一个长整型变量
        System.out.println(Long.MAX_VALUE);
        System.out.println(Long.MIN_VALUE);

    }
    public static void main6(String[] args) {
        int maxvalue=Integer.MAX_VALUE;
        int minvalue=Integer.MIN_VALUE;
        System.out.println(maxvalue+1);
        System.out.println(minvalue-1);
    }
    public static void main5(String[] args) {
        int age=66;
        if (age<=18) {
            System.out.println("少年");
        } else if (age<=28) {
            System.out.println("青年");
        }else if(age<=55) {
            System.out.println("中年");
        }else {
            System.out.println("老年");
        }
    }
    public static void main4(String[] args) {
        int num=12;
        int i=0;
        for (i=2;i<num;i++) {
            if (num%i==0) {
                System.out.println(num+" is not prime");
                break;
            }
        }
        if (num==i) {
            System.out.println(num+" is prime");
        }
    }
    public static void main3(String[] args) {
        int i=0;
        for(i=1;i<=100;i++) {
            int j=0;
            for (j=2;j<i;j++) {
                if(i%j==0)
                    break;
            }
            if (i==j)
                System.out.println(i);
        }
    }
    public static void main2(String[] args) {
        for (int year=1000;year<=2000;year++) {
            if (year%4==0 && year%100!=0 || year%400==0) {
                System.out.println(year+"is leapyear");
            }
        }
    }
    public static void main1(String[] args) {
        int count=0;
        for (int i=1;i<=100;i++) {
            if (i%10==9 ||i/10==9) {
                count ++;
            }
        }
        System.out.println(count);
    }
}
