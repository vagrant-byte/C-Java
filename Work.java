public class Work {
    public static void main(String[] args) {
        for (int i = 0; i <999999 ; i++) {
            //求位数
            int count=0;
            int tmp=i;
            while(tmp !=0) {
                count++;
                tmp=tmp/10;
            }
            //求每位
            tmp=i;
            int sum=0;
            while (tmp!=0) {
                 sum+=Math.pow(tmp%10,count);
                 tmp=tmp/10;
            }
            //判断
            if (sum==i) {
                System.out.println(i+"是我要的数");
            }
        }
    }
    //辗转相除求最大公约数
    public static void main4(String[] args) {
        int a=18;
        int b=12;
        while (a%b!=0) {
            int c=a%b;
            a=b;
            b=c;
        }
        System.out.println(b);
    }
    public static void main3(String[] args) {
        int n=-1;
        int count=0;
        while(n!=0) {
            count++;
            n=n&(n-1);
        }
        System.out.println(count);
    }
    //二进制中1的个数
    public static void main2(String[] args) {
        int n=-1;
        int count=0;
        while(n!=0) {
            if((n&1)!=0) {
                count++;
            }
            n=n>>>1;
        }
        System.out.println(count);
    }
    public static void main1(String[] args) {
        int flag=1;
        double sum=0;
        for (int i = 1; i <=100; i++) {
            sum=sum+1.0/i*flag;
            flag=-flag;
        }
        System.out.println(sum);
    }
}
