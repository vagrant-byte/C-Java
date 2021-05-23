import comper.NameCompare;

import java.util.Arrays;

class Person implements Comparable<Person>{
    public Person(String name,int age) {
        this.name=name;
        this.age=age;
    }

    public String name;
    public int age;

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }

    @Override
    public int compareTo(Person o) {
        if(this.age>o.age) {
            return 1;
        } else if (this.age==o.age) {
            return 0;
        } else {
            return -1;
        }
        //return this.name.compareTo(o.name);
    }
}
class Money implements Cloneable{
    public double money=9.9;

    @Override
    protected Object clone() throws CloneNotSupportedException {
        return super.clone();
    }
}
class Student implements Cloneable {
    public String name;
    public int age;

    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public Money m=new Money();

    @Override
    protected Object clone() throws CloneNotSupportedException {
        //return super.clone();
        Student p=(Student)super.clone();
        p.m=(Money)this.m.clone();
        return p;
    }
    @Override
    public String toString() {
        return "Student{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}
public class Test8 {
    public static void main(String[] args) throws CloneNotSupportedException {
        Student student1=new Student("z",23);
        Student student2=(Student)student1.clone();
        //student2.age=2;
        //System.out.println(student1);
        //System.out.println(student2);
        System.out.println(student1.m.money);
        student2.m.money=99;
        System.out.println(student1.m.money);
        System.out.println(student2.m.money);
    }
    public static void main2(String[] args) {
        Person[] person=new Person[3];
        person[0]=new Person("ah",2);
        person[1]=new Person("ww",26);
        person[2]=new Person("ee",56);
        Arrays.sort(person);
        System.out.println(Arrays.toString(person));
    }
    public static void main1(String[] args) {
        Person person1=new Person("z",22);
        Person person2=new Person("f",12);
        Person person3=new Person("g",62);
        System.out.println(person1.compareTo(person2));//根据年龄比较
    }
}
