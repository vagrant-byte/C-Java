import java.util.Arrays;

public class TrstDeom {
    //奇数在前偶数在后打印
    public static void func(int[] array) {
        int i=0;
        int j=array.length-1;
        while(i<j) {
            while (i<j && array[i]%2!=0) {
                i++;
            }
            while (i<j && array[j]%2==0) {
                j--;
            }
            int tmp=array[i];
            array[i]=array[j];
            array[j]=tmp;
        }
    }
    public static void main11(String[] args) {
        int[] array={1,2,3,4,5};
        func(array);
        System.out.println(Arrays.toString(array));
    }
    //逆序打印
    public static void reverse(int[] array) {
        int left=0;
        int right=array.length-1;
        while(left<=right) {
            int tmp=array[left];
            array[left]=array[right];
            array[right]=tmp;
            left++;
            right--;
        }
    }
    public static void main10(String[] args) {
        int[] array={1,2,3,4};
        reverse(array);
        System.out.println(Arrays.toString(array));
    }
    //判断是否有序
    public static boolean isSorted(int[] array) {
        if(array==null) return false;
        for (int i = 0; i < array.length-1 ; i++) {
            if(array[i]>array[i+1]) {
                return false;
            }
        }
        return true;
    }
    public static void main9(String[] args) {
        int[] array={1,3,2,4,5};
        System.out.println(isSorted(array));
    }
    //拷贝数组System.arraycopy  效率最快
    public static void main(String[] args) {
        int[] array={1,2,3,4,5};
        int[] ret=new int[array.length];
        System.arraycopy(array,0,ret,0,array.length);//原数组，从小标为0开始拷贝，目标数组，从小标0开始存放，拷贝长度为lenght
        System.out.println(Arrays.toString(ret));

    }
    //拷贝数组 数组名.clone
    public static void main7(String[] args) {
        int[] array={1,2,3,4,5};
        int[] copy=new int[array.length];
        copy=array.clone();
        System.out.println(Arrays.toString(copy));
    }
    //数组拷贝Arrays.copyOf
    public static void main6(String[] args) {
        int[] array={1,2,3,4,5};
        int[] ret=Arrays.copyOfRange(array,1,3);
        int[] cat=Arrays.copyOf(array,array.length);
        System.out.println(Arrays.toString(ret));
    }
    //数组拷贝for
    public static void main5(String[] args) {
        int[] array={1,2,3,4,5};
        int[] copy=new int[array.length];
        for (int i = 0; i < array.length; i++) {
            copy[i]=array[i];
        }
        System.out.println(Arrays.toString(copy));
    }
    //二分查找
    public static int binarySearch(int[] array,int toFind) {
        int left=0;
        int right=array.length-1;
        while (left<=right) {
            int mid=(left+right)/2;
            if(toFind>array[mid]) {
                left=mid+1;
            } else if(toFind<array[mid]) {
                right=mid-1;
            } else {
                return mid;
            }
        }
        return -1;
    }
    public static void main4(String[] args) {
        int[] array={1,2,3,45,5};
        System.out.println(binarySearch(array, 2));
    }
    //顺序查找数组中的某个值并返回下标
    public static int find(int[] array,int key) {
        for (int i = 0; i <array.length ; i++) {
            if(array[i]==key) {
                return i;
            }
        }
        return -1;
    }
    public static void main3(String[] args) {
        int[] array={1,2,3,4,5};
        System.out.println(find(array, 4));
    }
    //求最大值
    public static int maxlearn(int[] array) {
        int max=array[0];
        for (int i = 1; i <array.length ; i++) {
            if(max<array[i]) {
                max=array[i];
            }
        }
        return max;
    }
    public static void main2(String[] args) {
        int[] array={1,3,5,28,9};
        System.out.println(maxlearn(array));

    }
    //数组形式返回
    public static String myToString(int[] array) {
        if(array==null) return "null";
        String ret="[";
        for (int i = 0; i < array.length; i++) {
            ret=ret+array[i];
            if(i!=array.length-1) {
                ret=ret+',';
            }
        }
        ret=ret+']';
        return ret;
    }
    public static void main1(String[] args) {
        int[] array={1,2,3,4,5};
        String ret=myToString(array);
        System.out.println(ret);
    }
}
