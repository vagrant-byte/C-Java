import java.util.Arrays;
class Myvalu {
    public int val;
}
class Calculator{
    private int num1;
    private int num2;
    //构造方法
    public Calculator(int num1,int num2) {
        this.num1=num1;
        this.num2=num2;
    }
    public int getNum1() {
        return num1;
    }

    public void setNum1(int num1) {
        this.num1 = num1;
    }

    public int getNum2() {
        return num2;
    }

    public void setNum2(int num2) {
        this.num2 = num2;
    }
    public int add() {
        return this.num1+this.num2;
    }
    public int sub() {
        return this.num1-this.num2;
    }
    public int mul() {
        return this.num1*this.num2;
    }
    public double dev() {
        return this.num1*1.0/this.num2;
    }
}
public class HomeWork6 {
    public static void main(String[] args) {
        Calculator calculator=new Calculator(10,20);
        System.out.println(calculator.add());
        System.out.println(calculator.sub());
        System.out.println(calculator.mul());
        System.out.println(calculator.dev());

    }
   public static void main3(String[] args) {
        //Calculator calculator=new Calculator();
        //calculator.setNum1(10);
        //calculator.setNum2(20);
        //System.out.println(calculator.add());
        //System.out.println(calculator.sub());
        //System.out.println(calculator.mul());
        //System.out.println(calculator.dev());
    }
    //按值传递 交换两个变量的值 交换实参的值
    public static void swap(Myvalu myvalu1,Myvalu myvalu2) {
        Myvalu tmp=new Myvalu();
        tmp.val=myvalu1.val;
        myvalu1.val=myvalu2.val;
        myvalu2.val=tmp.val;
    }
    public static void main2(String[] args) {
        Myvalu myvalu1=new Myvalu();
        myvalu1.val=10;
        Myvalu myvalu2=new Myvalu();
        myvalu2.val=20;
        swap(myvalu1,myvalu2);
        System.out.println(myvalu1.val);
        System.out.println(myvalu2.val);
    }
    public static void swap2(int[] array1,int[] array2) {
        int len=array1.length>array2.length?array2.length:array1.length;
        int[] array3=new int[len];
        for (int i = 0; i <array3.length ; i++) {
            array3[i]=array1[i];
            array1[i]=array2[i];
            array2[i]=array3[i];
        }
    }
    public static void swap1(int[] array1,int[] array2) {
        if(array1.length>array2.length) {
            for (int i = 0; i <array2.length ; i++) {
                int tmp=array1[i];
                array1[i]=array2[i];
                array2[i]=tmp;
            }
        } else {
            for (int i = 0; i <array1.length ; i++) {
                int tmp=array1[i];
                array1[i]=array2[i];
                array2[i]=tmp;
            }
        }
    }
    //使用引用交换两个数组array[0] array[1] 分别存放array1和array2的地址
    public static void swap3(int[][] array) {
        int[] tmp=array[0];
        array[0]=array[1];
        array[1]=tmp;
    }
    public static void main1(String[] args) {
        int[] array1={1,2,3,4};
        int[] array2={5,6,7,8,9,10};
        int[][] array3={array1,array2};
        swap3(array3);
        //swap1(array1,array2);
        System.out.println(Arrays.toString(array1));
        System.out.println(Arrays.toString(array2));
    }
}
