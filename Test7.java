import sun.security.provider.SHA;

class Animal {
    public String name;
    public Animal(String name) {
        this.name=name;
    }
    public void eat() {
        System.out.println(this.name+"正在吃!  Animal");
    }
}
interface IFlying {
    void fly();
}
interface IRunning {
    void run();
}
interface ISwimming {
    void swim();
}
class Cat extends Animal implements IRunning {

    public Cat(String name) {
        super(name);
    }
    @Override
    public void run() {
        System.out.println(this.name+"正在跑");
    }
}
class Duck extends Animal implements IRunning,IFlying,ISwimming {
    public Duck(String name) {
        super(name);
    }
    @Override
    public void fly() {
        System.out.println(this.name+"正在飞");
    }
    @Override
    public void run() {
        System.out.println(this.name+"正在跑");
    }
    @Override
    public void swim() {
        System.out.println(this.name+"正在游");
    }
}
class Bird extends Animal {
    public Bird(String name) {
        super(name);
    }
    public void eat() {
        System.out.println(this.name+"正在吃!  Bird");
    }
    public void fly() {
        System.out.println(this.name+"正在飞");
    }
}
class Shape {
    public void draw() {

    }
}
class Cycle extends Shape {
    @Override
    public void draw() {
        System.out.println("⭕");
    }
}
class React extends Shape {
    @Override
    public void draw() {
        System.out.println("♦");
    }
}
public class Test7 {
    public static void drewMap(Shape shape) {
        shape.draw();
    }

    public static void main(String[] args) {
        Shape shape1=new Cycle();
        Shape shape2=new React();
        drewMap(shape1);
        drewMap(shape2);
    }
    public static void main1(String[] args) {
        Animal animal1=new Bird("扁扁");
        animal1.eat();
        Animal animal=new Animal("豆豆");
        animal.eat();
    }
}
