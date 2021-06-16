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
//速算机器人
class Solution5 {
    public int calculate(String s) {
        int x=1;
        int y=0;
        for (int i = 0; i <s.length() ; i++) {
            char ch=s.charAt(i);
            if(ch=='A') {
                x=x*2+y;
            } else {
                y=x+2*y;
            }
        }
        return x+y;
    }
}
//青蛙跳台阶
class Solution4 {
    public int numWays(int n) {
        if(n<2) {
            return 1;
        }
        int [] num=new int[n+1];
        num[0]=1;
        num[1]=1;
        for(int i=2;i<=n;i++) {
            num[i]=(num[i-1]+num[i-2])%1000000007;
        }
        return num[n];
    }
}
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
