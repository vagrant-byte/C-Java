class Person{
    //成员变量 属性
    private String name;//封装  修饰成员变量 只能在当前类中使用
    private int age;
    public String sex;
    public static int count;
    public final static int fun=10;//static开辟内存在方法区
    public final int num=11;//final修饰不可更改  开辟内存在堆上
    //代码块
    static {
        System.out.println("静态代码块，不可以使用非静态的数据");
    }
    {
        System.out.println("实例代码块也叫构造代码块");
    }
    //构造方法 无返回值且方法名和类名相同 //下面方法的重载
    public Person() {
        this("zhangsan");//this()调用自己的构造方法 只能用一次 必须在构造方法最前面使用
        System.out.println("不带参数的构造方法");
    }
    public Person(String name) {
        this.name=name;
        System.out.println("带一个返回值的构造方法");
    }
    public Person(String  name,int age) {
        this.name=name;
        this.age=age;
        System.out.println("带有两个返回值的构造方法");
    }

    //方法
    public void eat() {
        System.out.println(name+ "吃饭");
    }
    public void show() {
        System.out.println("姓名： "+name+"年龄："+age+"性别："+sex);
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;//this.data 当前对象的引用
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", age=" + age +
                ", sex='" + sex + '\'' +
                '}';
    }
}
public class TestDemo5 {
    public static void main(String[] args) {
        Person p=new Person("zhangsan");
        System.out.println(p);
        Person p1=new Person("wangwu",20);
        System.out.println(p1);
        //p.setName("zhangsan");
        //System.out.println(p.getName());
        //p.setAge(20);
        //System.out.println(p.getAge());
        //p.sex="男";
        //p.show();
        //p.eat();
    }
}
