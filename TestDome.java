public class TestDome {
    public static void main(String[] args) {
        int count=0;
        for (int i=1;i<=100;i++) {
            if (i%10==9||i/10==9) {
                count++;
            }
        }
        System.out.println(count);
    }
    public static void main4(String[] args) {
        int a=10%3;
        int b=-10%3;
        int c=10%-3;
        int d=-10%-3;
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        System.out.println(d);
    }
    public static void main3(String[] args) {
        int a=10;
        int b=20;
        System.out.println(a<b?a:b);

    }
    public static void main2(String[] args) {
        int a=20;
        int b=10;
        a=a^b;
        b=a^b;
        a=a^b;
        System.out.println(a);
        System.out.println(b);
    }
    public static void main1(String[] args) {
        int a=10;
        int b=20;
        int c=a;
        a=b;
        b=c;
        System.out.println(a);
        System.out.println(b);
    }
}
