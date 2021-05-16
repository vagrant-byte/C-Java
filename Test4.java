package Demo1;
class Animal {
    public String name;
    public int age;
    public void eat() {
        System.out.println(this.name+" 吃饭！Animal");
    }
    //构造方法
    public Animal (String name) {
        this.name=name;
    }
}
class Cat extends Animal {
    public Cat(String name) {
        super(name);
    }
    @Override
    //重写
    public void eat() {
        System.out.println(this.name+"吃饭！Cat");
    }
}
class Bird extends Animal {
    public Bird(String name) {
        super(name);
    }
    public void fly() {
        System.out.println(this.name+"正在飞！");
    }
}
public class Test4 {
    public static void main1(String[] args) {
        Cat cat=new Cat("banban");
        System.out.println(cat.name);
        System.out.println(cat.age);
        cat.eat();
    }
//动态绑定   向上转型
    public static void main2(String[] args) {
        Animal animal=new Cat("banban");
        System.out.println(animal.name);
        animal.eat();
    }
    //向下绑定
    public static void main(String[] args) {
        Animal animal=new Cat("banban");
        if(animal instanceof Bird) {
            Bird bird=(Bird)animal;
            bird.fly();
        }
    }
}
