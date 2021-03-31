public class TestDemo {
    public static void main(String[] args) {
        byte a1=10;
        byte a2=20;
        int b=a1+a2;
        System.out.println(b);
        byte b1=10+20;
        System.out.println(b1);
    }
    public static void main7(String[] args) {
        String str1="My name is \"张三\"";//转义字符
        System.out.println(str1);
    }
    public static void main6(String[] args) {
        String str1="abc";
        String str2="def";
        String str3=str1+str2;
        System.out.println(str3);
        System.out.println("abc"+"def");
        int a=10;
        int b=20;
        System.out.println("a:"+a +"b:"+b);
    }
    public static void main5(String[] args) {
        String str1="resule=";
        int a=10;
        int b=20;
        String result=str1+a+b;//字符串
        System.out.println(result);
    }
    public static void main4(String[] args) {
        int a=10;
        a=20;
        System.out.println(a);
        final int b;//final修饰变量
        b=20;
        //b=40;
        System.out.println(b);
    }
    public static void main3(String[] args) {
        int a=10;
        String str=a+"";
        System.out.println(str);
        String ret=String.valueOf(a);//整数转字符
        System.out.println(ret);
    }
    public static void main2(String[] args) {
        String str="10";
        int b=Integer.parseInt(str);//字符转整数
        System.out.println(b);

    }
    public static void main1(String[] args) {
        String str="\\\"hello\\\"";
        System.out.println(str);
    }
}
