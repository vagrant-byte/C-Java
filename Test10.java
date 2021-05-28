import java.util.Scanner;

public class Test10 {
    public static void revers1(StringBuffer str) {
        str.reverse();
    }
    public static String revers(String str,int bef,int end ) {
        if(str==null) {
            return null;
        }
        int i=bef;
        int j=end;
        char[] ch=str.toCharArray();
        while (i<j) {
            char tmp=ch[i];
            ch[i]=ch[j];
            ch[j]=tmp;
            i++;
            j--;
        }
        return new String(ch);
    }
    public static String reversSentence(String str,int n) {
        if(str==null) {
            return null;
        }
        str=revers(str,0,n-1);
        str=revers(str,n,str.length()-1);
        str=revers(str,0,str.length()-1);
        return str;
    }
//字符串反转  反转三次
    public static void main1(String[] args) {
        Scanner scanner=new Scanner(System.in);
        String str=scanner.next();
        int n=scanner.nextInt();
        System.out.println(reversSentence(str,n));
    }

    public static void main2(String[] args) {
        StringBuffer s=new StringBuffer("asd");
        revers1(s);
    }

    public static void main3(String[] args) {
        StringBuffer str=new StringBuffer("asd");
        for (int i = 0; i <10 ; i++) {
            str.append(i);
        }
        System.out.println(str.toString());
    }

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        try {
            int a=scanner.nextInt();
            int b=scanner.nextInt();
            int c=a/b;
        }catch (NullPointerException e) {
            e.fillInStackTrace();
        }finally {
            scanner.close();
        }
    }
}
