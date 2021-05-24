package Test;

import java.io.UnsupportedEncodingException;
import java.util.Arrays;

public class Test9 {
    public static void main(String[] args) throws UnsupportedEncodingException {
        String str="abcd";
        byte[] bytes=str.getBytes();
        System.out.println(Arrays.toString(bytes));
        String str1="刘";
        byte[] bytes1=str1.getBytes("utf-8");
        System.out.println(Arrays.toString(bytes1));

    }
    //字节转字符串
    public static void main7(String[] args) {
        byte[] bay={97,98,99};
        String str=new String(bay);
        System.out.println(str);
        String str1=new String(bay,1,2);
        System.out.println(str1);
    }
    public static boolean func(String str) {
        for (int i = 0; i <str.length() ; i++) {
            char ch=str.charAt(i);
            if(ch<'0'||ch>'9') {
                return false;
            }
        }
        return true;
    }
    public static void main6(String[] args) {
        String str="123456";
        System.out.println(func(str));
    }
    public static void main5(String[] args) {
        char[] ch={'h','e','l','l','o'};
        String str=new String(ch);
        System.out.println(str);
        String str1=new String(ch,1,4);
        System.out.println(str1);
    }
    //字符串转字符
    public static void main4(String[] args) {
        String str="hello";
        char[] ch=str.toCharArray();
        System.out.println(ch);
    }
    public static void main3(String[] args) {
        String str="hello";
        for (int i = 0; i <str.length(); i++) {
            char ch=str.charAt(i);
            System.out.println(ch);
        }

    }
    public static void exchange(String str,char[] ch) {
        str="world";
        ch[0]='f';
    }
    public static void main2(String[] args) {
        String str1="hello";
        char[] ch={'a','s','d'};
        String str2=new String(ch);
        System.out.println(str1);
        System.out.println(str2);
        System.out.println("******修改后******");
        exchange(str1,ch);
        System.out.println(str1);
        System.out.println(ch);
    }
    public static void main1(String[] args) {
        String str1="hello";
        char[] ch={'h','e','l','l','o'};
        String str2=new String(ch);
        System.out.println(str1);
        System.out.println(str2);
    }
}
