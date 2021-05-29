import java.util.Scanner;

public class Test11 {
    public static String revers(String str, int bef, int end) {
        char[] ch = str.toCharArray();
        while (bef < end) {
            char tmp = ch[bef];
            ch[bef] = ch[end];
            ch[end] = tmp;
            bef++;
            end--;
        }
        return new String(ch);
    }

    public static String func(String str, int n) {
        str = revers(str, 0, n - 1);
        str = revers(str, n, str.length() - 1);
        str = revers(str, 0, str.length() - 1);
        return str;
    }

    //字符串反转
    public static void main1(String[] args) {
        String str = "abcdef";
        System.out.println(func(str, 3));
    }

    public static void main2(String[] args) {
        System.out.println(func1());
    }

    //旋转字符串 contains判断一个子字符串是否存在
    public static boolean func1() {
        String str1 = "helloWord";
        String str2 = "Wordhello";
        if (str1 == null || str2 == null || str1.length() < 2 || str2.length() < 2 || str1.length() != str2.length()) {
            return false;
        }
        return (str1 + str1).contains(str2);
    }

    public static String revers1(String s) {
        int i = 0;
        int j = s.length() - 1;
        char[] ch = s.toCharArray();
        while (i < j) {
            char tmp = ch[i];
            ch[i] = ch[j];
            ch[j] = tmp;
            i++;
            j--;
        }
        return new String(ch);
    }

    public static String trans1(String s, int n) {
        if (n == 0) {
            return s;
        }
        s = revers(s, 0, n - 1);


        return s;
    }

    public static void main3(String[] args) {
        String str = "hello world";
        int n = str.length();
        System.out.println(trans1(str, n));
    }

    public static void main4(String[] args) {
        Scanner scanner=new Scanner(System.in);
        while (scanner.hasNext()) {
            String str=scanner.nextLine();
            StringBuffer ret=new StringBuffer();
            for (int i = 0; i < str.length(); i++) {
                char ch=str.charAt(i);
                String tmp=ret.toString();
                if(!tmp.contains(ch+"")) {
                    ret.append(ch);
                }
            }
            System.out.println(ret);
        }
    }
    //检查两个字符串是否相等
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        if(word1.length==0||word2.length==0) {
            return false;
        }
        if(word1==null||word2==null) {
            return false;
        }
        if(word1.length==0&&word2.length==0||word1==null&&word2==null) {
            return true;
        }
        String str1="";
        String str2="";
        for(int i=0;i<word1.length;i++) {
            str1+=word1[i];
        }
        for(int i=0;i<word2.length;i++) {
            str2+=word2[i];
        }
        return str1.equals(str2);
    }
    //字符串连接
    public static void main5(String[] args) {
        Scanner scanner=new Scanner(System.in);
        while(scanner.hasNext()) {
            String str=scanner.nextLine();
            StringBuffer stringBuffer=new StringBuffer();
            String[] s=str.split(" ");
            for (String ss:s) {
                stringBuffer.append(ss);
            }
            System.out.println(stringBuffer);
        }
    }
    private static void testMethod(){
        System.out.println("testMethod");
    }
    public static void main(String[] args) {
        ((Test11)null).testMethod();
    }
}
