public class HomeWork3 {
    public static void transform(int[] array) {
        for (int i = 0; i < array.length; i++) {
            array[i]=array[i]*2;
            System.out.print(array[i]+" ");
        }
    }
    public static void main(String[] args) {
        int[] array={1,2,3};
        transform(array);
    }
    //创建数组，秉赋初始值
    public static void main4(String[] args) {
        int[] array=new int[100];
        for (int i = 0; i < array.length; i++) {
            array[i]=i+1;
            System.out.print(array[i]+" ");
        }
    }
    //打印数组
    public static void printArray(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+" ");
        }
    }
    public static void main3(String[] args) {
        int[] array={1,2,3,4,5};
        printArray(array);
    }
    //求和
    public static int sum(int[] array) {
        int sum=0;
        for (int i = 0; i < array.length; i++) {
            sum=sum+array[i];
        }
        return sum;
    }
    public static void main2(String[] args) {
        int[] array={1,2,3,4,5};
        System.out.println(sum(array));
    }
    //平均数
    public static double avg(int[] array) {
        double sum=0;
        for (int i = 0; i <array.length ; i++) {
            sum=sum+array[i];
        }
        return sum/array.length;
    }
    public static void main1(String[] args) {
        int[] array={1,2,3,4,5,6};
        double average=avg(array);
        System.out.println(average);
    }
}
