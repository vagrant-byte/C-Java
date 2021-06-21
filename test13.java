package 数组;
//打印从1到最大的n位数
class Solution1 {
    public int[] printNumbers(int n) {
        int[] arr=new int[(int)Math.pow(10,n)-1];
        for(int i=0;i<arr.length;i++) {
            arr[i]=i+1;
        }
        return arr;

    }
}
//删除有序数组重复项
class S {
    public int removeDuplicates(int[] nums) {
        int slow=0;
        int fast=1;
        while (fast<nums.length){
            if(nums[slow]!=nums[fast]) {
                nums[++slow]=nums[fast];
            }
            fast++;
        }
        return slow+1;
    }
}

//找最大值
class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int i=0;
        for(i=0;i<arr.length;i++) {
            if(arr[i]>arr[i+1]) {
                break;
            }
        }
        return i;
    }
}
//调整数组顺序使奇数位于偶数前面
//while for 循环   if 判断
class Solution6 {
    public int[] exchange(int[] nums) {
        int left=0;
        int right=nums.length-1;
        while (left<right) {
            while (left<right&&nums[left]%2!=0) {
                left++;
            }
            while (left<right&&nums[right]%2==0) {
                right--;
            }
            if(left<right) {
                int tmp=nums[left];
                nums[left]=nums[right];
                nums[right]=tmp;
                left++;
                right--;
            }
        }
        return nums;
    }
}
//重复数字
class Solution8 {
    public int findRepeatNumber(int[] nums) {
        //创建一个新数组存放数据
        int[] arr=new int[nums.length];
        for (int i = 0; i <nums.length ; i++) {
            //这个数字多次出现就++
            int num=arr[nums[i]]++;
            if(num>1) {
                return nums[i];
            }
        }
        return -1;
    }
}
//最小的k个数
class Solution7 {
    public int[] getLeastNumbers(int[] arr, int k) {
        for (int i = 0; i <arr.length-1 ; i++) {
            for (int j = 0; j<arr.length-1-i  ; j++) {
                if(arr[j]>arr[j+1]) {
                    int tmp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=tmp;
                }
            }
        }
        int[] a=new int[k];
        for (int i = 0; i <k ; i++) {
            a[i]=arr[i];
        }
        return a;
    }
}
//缺失的数字
class Solution10 {
    public int missingNumber(int[] nums) {
        int num=nums.length;
        for (int i = 0; i <nums.length ; i++) {
            if(nums[i]!=i) {
                return i;
            }
        }
        return num;
    }
}
//数组中超过一半的数字
class Solution14 {
    public int majorityElement(int[] nums) {
        int count=0;
        int card=0;//出现次数最多的数字
        for (int i = 0; i <nums.length ; i++) {
            if(count==0) {
                card=nums[i];
            }
            if(card==nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return card;

    }
}
//旋转数组最小数
class Solution13 {
    //二分查找
    public int minArray(int[] numbers) {
        int low=0;
        int high=numbers.length-1;
        while (low<high) {
            int mid=low+(high-low)/2;
            if(numbers[mid]>numbers[high]) {
                low=mid+1;
            }else if(numbers[mid]<numbers[high]) {
                high=mid;
            } else {
                high-=1;
            }
        }
        return numbers[low];
    }
        /*for (int i = 0; i <numbers.length-1 ; i++) {
            for (int j = 0; j <numbers.length-1-i ; j++) {
                if(numbers[j]>numbers[j+1]) {
                    int tmp=numbers[j];
                    numbers[j]=numbers[j+1];
                    numbers[j+1]=tmp;
                }
            }
        }
        return numbers[0];
    }*/

}
class Solution11 {
    public int search(int[] nums, int target) {
        //二分查找
        int left=0;
        int right=nums.length-1;
        int count=0;
        while (left<right) {
            int mid=left+(right-left)/2;
            if(nums[mid]<=target) {
                left=mid;
              } else if(nums[mid]>target) {
                right=mid-1;
            }
        }
        while (left<nums.length&&nums[left++]==target) {
            count++;
        }
        return count;
    }
        /* count=0;
        for (int i = 0; i <nums.length ; i++) {
            if(nums[i]==target) {
                count++;
            }
        }
        return count;
    }*/
}
public class test13 {

}

