import javafx.print.Collation;
import org.omg.CORBA.Object;

import java.lang.reflect.Array;
import java.util.*;
//泛型
class MyList<T> {
    private T[] val;
    private int size;
    public MyList() {
        this.val=(T[])new Object[10];//数组不能强制类型转换  这里是擦除机制 转化为Object类
    }
    public void add(T val) {
        this.val[this.size++] = val;
    }

    public  T getpos(int pos) {
        return this.val[pos];
    }
}
public class Test12 {
    public static void main(String[] args) {
        MyList<Integer> myList=new MyList<>();
        myList.add(1);
        myList.add(2);
        myList.add(3);
        System.out.println(myList.getpos(0));

    }
    //装箱拆箱
    public static void main6(String[] args) {
        Integer a=200;
        Integer b=200;
        System.out.println(a==b);//结果为false
    }
    public static void main5(String[] args) {
        Integer a=100;
        Integer b=100;
        System.out.println(a==b);//结果为true  因为Integer的范围是-128-127 在这个范围内 a 和b值相等所占内存地方相同
    }
    public static void main4(String[] args) {
        int a=10;
        Integer b=a;//自动装箱
        Integer c=Integer.valueOf(a);//手动装箱
        Integer d=20;
        int f=d;//自动拆箱
        int e=d.intValue();//手动拆箱
        byte g=d.byteValue();
        double h=d.doubleValue();
    }

    //集合
    //Collection
    public static void main1(String[] args) {
        Collection<Integer> list=new ArrayList<>();
        System.out.println(list.isEmpty());//查找集合是否为空
        list.add(1);
        list.add(2);
        list.add(3);
        System.out.println(list.size());
        //Object[] array=list.toArray();//将集合转换为数组打印
        //System.out.println(Arrays.toString(array));
        for (Integer s:list) {
            System.out.println(s);
        }//打印集合
    }
//Map
    public static void main2(String[] args) {
        Map<String, String> map = new HashMap<>();
        map.put("作者", "鲁迅");//将指定的 k-v 放入 Map
        map.put("书名", "呐喊");
        map.put("类型", "文学");
        System.out.println(map.getOrDefault("作者", "鲁迅"));//根据指定的 k 查找对应的 v，没有找到用默认值代替
        System.out.println(map.get("书名"));//根据指定的 k 查找对应的 v
        System.out.println(map.containsKey("书名"));//判断是否包含K
        System.out.println(map.containsValue("文学"));//判断是否包含V
        //Set<Map.Entry<K, V>> entrySet() 将所有键值对返回
        for (Map.Entry<String, String> entry : map.entrySet()) {
            System.out.println(entry.getKey());
            System.out.println(entry.getValue());
        }
        System.out.println(map.size());
    }
}
