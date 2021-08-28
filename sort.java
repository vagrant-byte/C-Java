package 排序;

import java.util.Arrays;
import java.util.Stack;

public class sort {
    //非递归实现快排
    public static void quickSortByLoop(int[] array) {
        //stack 用来存放数组下标，通过下标来表示接下来要处理的区间
        Stack<Integer> stack=new Stack<>();
        //初始情况下，先把右侧边界下标入栈，再把左侧边界下标入栈，左右边界仍然构成前闭后闭区间
        stack.push(array.length-1);
        stack.push(0);
        while (!stack.empty()) {
            //取元素顺序要和push顺序相反
            int left=stack.pop();
            int right=stack.pop();
            if(left>=right) {
                //区间只有0个或1个元素。不需整理
                continue;
            }
            //通过partition把区间整理成以基准值为中心，左侧小于等于基准值，右侧大于等于基准值
            int index=partition(array,left,right);
            //基准值右侧区间
            stack.push(right);
            stack.push(index+1);
            //基准值左侧区间
            stack.push(index-1);
            stack.push(left);
        }
    }
    private static int partition(int[] array, int left, int right) {
        int i=left;
        int j=right;
        int base=array[right];//取最右侧为基准值
        while (i<j) {
            //从左往右找比基准值大的值
            while (i<j&&array[i]<=base) {
                i++;
            }
            //上边循环结束，i要么与j重合，或者i指向的值大于base
            //从右往左找比基准值小的值
            while (i<j&&array[j]>=base) {
                j--;
            }
            //上边循环结束，i要么与j重合，或者j指向的值小于base
            //交互i 与 j 的值
            swap(array,i,j);
        }
        //当i与j重合时候，最后一步，要把重合位置的元素与基准值进行交换
        swap(array,i,right);
        return i;
    }
    private static void swap(int[] array, int i, int j) {
        int tmp=array[i];
        array[i]=array[j];
        array[j]=tmp;
    }
    //非递归实现归并排序  使用数组实现
    public static void mergeSortByLoop(int[] array) {
        //引入一个gap变量进行分组
        //当gap为1时[0][1]进行合并，[2][3]进行合并，[4][5]进行合并 [6][7]进行合并
        //当gap为2时[0,1][2,3]进行合并,[4,5][6,7]进行合并
        //当gap为4时[0,1,2,3]进行合并，[4,5,6,7]进行合并
        for (int gap=1;gap<array.length;gap*=2) {
            for (int i = 0; i <array.length ; i+=2*gap) {
                //当前相邻组
                //[beg,mid)
                //[mid,end)
                int beg=i;
                int mid=i+gap;
                int end=i+2*gap;
                //防止下标越界
                if(mid>array.length) {
                    mid=array.length;
                }
                if(end>array.length) {
                    end=array.length;
                }
                merge(array,beg,mid,end);
            }

        }
    }
    public static void merge(int[] array,int low,int mid,int high) {
        int[] output=new int[high-low];
        int outputIndex=0;//记录output放入多少个元素
        int cur1=low;
        int cur2=mid;
        while (cur1<mid&&cur2<high) {
            if(array[cur1]<=array[cur2]) {
                output[outputIndex]=array[cur1];
                outputIndex++;
                cur1++;
            } else {
                output[outputIndex]=array[cur2];
                outputIndex++;
                cur2++;
            }
        }
        //当上面循环结束的时候，肯定是cur1或者cur2其中一个先到达末尾，将另一个剩下的部分直接拷贝到output中
        while (cur1<mid) {
            output[outputIndex]=array[cur1];
            outputIndex++;
            cur1++;
        }
        while (cur2<high) {
            output[outputIndex]=array[cur2];
            outputIndex++;
            cur2++;
        }
        //将output中元素放回原来数组zhong
        for (int i = 0; i <high-low ; i++) {
            array[low+i]=output[i];
        }
    }

    public static void main(String[] args) {
        int[] a={2,4,7,2,1,9};
        mergeSortByLoop(a);
        System.out.println(Arrays.toString(a));
    }

}
