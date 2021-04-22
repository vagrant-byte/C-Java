import sun.awt.windows.WPrinterJob;

class Person {
    private String name;
    private int age;
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
}
public class Test1 {
    public static void main(String[] args) {
        Person person=new Person();
        person.setName("zhangsan");
        System.out.println(person.getName());
    }
    public static void main1(String[] args) {
       // Person p=new Person();
        //p.age++;
        //Person.count++;
        //System.out.println(p.age);
        //System.out.println(Person.count);
        //System.out.println("============");
        //Person p1=new Person();
        //p1.age++;
        //Person.count++;
        //System.out.println(p1.age);
        //System.out.println(Person.count);
        //p=new Person();
        //Person p2=p;
        //System.out.println(p.name);
        //System.out.println(p.age);
    }
}
class TestDemo {
    public static void eat() {
        System.out.println("吃饭");
    }
}
