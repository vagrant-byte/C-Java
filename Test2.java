import java.util.jar.JarOutputStream;

public class Test2 {
    //找一组数据中只出现一次的一个数
    public static void main1(String[] args) {
        int[] array={1,2,3,4,2,3,1};
        int tmp=0;
        for (int i = 0; i <array.length ; i++) {
            tmp^=array[i];
        }
        System.out.println(tmp);
    }
    //找一组数据中只出现一次的两个数
    public static void main(String[] args) {
        int[] array={1,2,3,4,2,3};
        int tmp=0;
        for (int i = 0; i <array.length; i++) {
            tmp^=array[i];
        }
        int j=0;
        for ( j = 0; j <32 ; j++) {
            if(tmp>>j==1) {
                break;
            }
        }
        int a=0;
        int b=0;
        for (int i = 0; i <array.length ; i++) {
            if(array[i]>>j==1) {
                a^=array[i];
            } else {
                b^=array[i];
            }
        }
        System.out.println(a);
        System.out.println(b);
    }
}
