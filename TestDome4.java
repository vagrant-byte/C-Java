import java.util.Arrays;

public class TestDome4 {
    //不规则数组打印
    public static void main(String[] args) {
        int[][] array3=new int[2][];
        array3[0]=new int[3];
        array3[1]=new int[2];
        array3[0][2]=3;
        for (int i = 0; i <array3.length ; i++) {
            for (int j = 0; j <array3[i].length ; j++) {
                System.out.print(array3[i][j]+" ");
            }
            System.out.println();
        }
    }
    //Arrays.deepToString打印二维数组
    public static void main4(String[] args) {
        int[][] array2=new int[2][3];
        System.out.println(Arrays.deepToString(array2));
    }
    //foreach打印二维数组
    public static void main3(String[] args) {
        int[][] array1=new int[][]{{1,2,3},{4,5,6}};
        for (int[]arr:array1) {
            for (int x:arr) {
                System.out.print(x+" ");
            }
            System.out.println();
        }
    }
    //for循环打印二维数组
    public static void main2(String[] args) {
        int[][] array={{1,2,3},{4,5,6}};
        int[][] array1=new int[][]{{1,2,3},{4,5,6}};
        int[][] array2=new int[2][3];
        int[][] array3=new int[2][];//不规则二维数组
        for (int i = 0; i <2 ; i++) {
            for (int j = 0; j <3 ; j++) {
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }
        for (int i = 0; i <array.length ; i++) {
            for (int j = 0; j <array[i].length ; j++) {
                System.out.print(array[i][j]+" ");
            }
            System.out.println();
        }

    }
    //冒泡排序
    public static void bubbiesort(int[] array) {
        boolean flg=false;
        for (int i = 0; i < array.length-1; i++) {
            flg=false;
            for (int j = 0; j <array.length-1-i ; j++) {
                if(array[j]>array[j+1]) {
                    int tmp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=tmp;
                    flg=true;
                }
            }
            if(flg==false) {
                break;
            }
        }
    }
    public static void main1(String[] args) {
        int[] array={1,3,2,5,6};
        bubbiesort(array);
        System.out.println(Arrays.toString(array));
    }
}
