import java.util.Arrays;

public class TestDemo1 {
    //三种方法遍历数组
    public static void main(String[] args) {
        int [] array={1,2,3,4,5};
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]);
        }
        System.out.println();
        System.out.println("==================");
        for (int x:array) {
            System.out.print(x);
        }
        System.out.println();
        System.out.println("===================");
        String str= Arrays.toString(array);
        System.out.println(str);

    }
    //数组交换两个数
    public static void swap(int [] array) {
        int tmp=array[0];
        array[0]=array[1];
        array[1]=tmp;
    }
    public static void main2(String[] args) {
        int [] array={10,20};
        swap(array);
        print(array);
    }
    public static void change(int [] array) {
        for (int i = 0; i < array.length; i++) {
            array[i]=array[i]*2;
        }
    }
    public static void print(int [] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+" ");
        }
    }
    public static void main1(String[] args) {
        int [] array={1,2,3,4,5};
        change(array);
        print(array);
    }
}
