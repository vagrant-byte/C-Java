//模拟实现strStr
class Solution3 {
    public int strStr(String haystack, String needle) {
        int m=haystack.length();
        int n=needle.length();
        for (int i = 0; i <=m-n ; i++) {
            if(needle.equals(haystack.substring(i,i+n))) {
                return i;
            }
        }
        return -1;
    }
}
//回文数
class Solution2 {
    public boolean isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        int tmp=0;
        int num=x;//防止交换后X值改变
        while(num!=0) {
            tmp=tmp*10+num%10;
            num=num/10;
        }
        if(tmp==x) {
            return true;
        } else {
            return false;
        }
    }
}
//整数反转
class Solution1 {
    public int reverse(int x) {
        int num=0;
        while(x!=0) {
            int tmp=num;//存放之间的结果
            num=num*10+x%10;
            x=x/10;
            //判读是否栈溢出
            if(num/10!=tmp) {
                return 0;
            }
        }
        return num;
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
public class Leetcode1 {
    //删除有序数组重复项
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
    public static void main(String[] args) {

    }
}
