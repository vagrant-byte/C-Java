import java.util.Arrays;
public class HomeWork4 {
    public static String toString(int[] array) {
        String ret="[";
        for (int i = 0; i <array.length ; i++) {
            ret += array[i];
            if(i != array.length-1) {
                ret+=",";
            }
        }
        ret+="]";
        return ret;
    }
    public static void main(String[] args) {
        int[] array={1,2,3};
        System.out.println(toString(array));
    }
    //拷贝数组
    public static int[] copyOf(int[] array) {
        int[] tmp=new int[array.length];
        for(int i = 0; i < array.length; i++) {
            tmp[i]=array[i];
        }
        return tmp;
    }
    public static void main3(String[] args) {
        int[] array={1,2,3,4,5};
        int[] ret=copyOf(array);
        System.out.println(Arrays.toString(ret));
    }
    //二分查找
    public static int binarySearch(int[] array,int key) {
        int left=0;
        int right=array.length-1;
        while(left<=right) {
            int mid=(left+right)/2;
            if(array[mid]<key) {
                left=mid+1;
            } else if(array[mid]==key) {
                return mid;
            } else {
                right=mid-1;
            }
        }
        return -1;
    }
    public static void main2(String[] args) {
        int[] array={1,2,3,4,5};
        System.out.println(binarySearch(array, 3));
    }
    //判断数组有序
    public static boolean isSorted(int[] array) {
        for (int i = 0; i <array.length ; i++) {
            if(array[i]>array[i+1]) {
                return false;
            }
        }
        return true;
    }
    public static void main1(String[] args) {
        int[] array={1,2,4,3,5};
        System.out.println(isSorted(array));
    }
}
