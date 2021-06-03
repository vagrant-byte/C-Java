import java.util.Scanner;

public class test14 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        while (scanner.hasNext()) {
            String str=scanner.nextLine();
            StringBuffer stringBuffer=new StringBuffer();
            for (int i = 0; i <str.length() ; i++) {
                char ch=str.charAt(i);
                String tmp=stringBuffer.toString();
                if(!tmp.contains(ch+"")) {
                    stringBuffer.append(ch);
                }
            }
            System.out.println(stringBuffer.toString());
        }
    }
    public static void main2(String[] args) {
        String str="abc de f";
        String[] s=str.split(" ");
        StringBuffer st=new StringBuffer();
        for (String ss:s) {
            st.append(ss);
        }
        System.out.println(st.toString());
    }
    public static void main1(String[] args) {

        String str1="ababcded";
        String str2="abcd";
        StringBuffer stringBuffer=new StringBuffer();
        for (int i = 0; i <str1.length() ; i++) {
            char ch=str1.charAt(i);
            if(!str2.contains(ch+"")) {
                stringBuffer.append(ch);
            }
        }
        System.out.println(stringBuffer.toString());
    }

}
