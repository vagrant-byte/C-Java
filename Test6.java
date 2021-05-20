import AnimalClass.Animal;

import java.util.concurrent.Callable;

class Cat extends AnimalClass.Animal implements IRunning {
    public Cat(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.print(this.name+"正在跑");
    }
}
class Bird extends AnimalClass.Animal implements IFlying {
    public Bird(String name) {
        super(name);
    }

    @Override
    public void fly() {
        System.out.println(this.name+"正在飞");
    }
}
//extends 继承 implements接口 可以实现多继承
class Dick extends AnimalClass.Animal implements IFlying,IRunning,ISwimming{
    public Dick(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.println(this.name+"正在跑");
    }

    @Override
    public void swim() {
        System.out.println(this.name+"正在游");
    }

    @Override
    public void fly() {
        System.out.println(this.name+"正在飞");
    }
}
public class Test6 {
    public static void funcRun(IRunning iRunning) {
        iRunning.run();
    }
    public static void funcSwim(ISwimming iSwimming) {
        iSwimming.swim();
    }
    public static void funcFly(IFlying iFlying) {
        iFlying.fly();
    }

    public static void main1(String[] args) {
        funcRun(new Cat("初一"));
        //funcRun(new Bird("huahua"));
    }

    public static void main2(String[] args) {
        funcFly(new Bird("花花"));
        funcFly(new Dick("豆豆"));
    }

    public static void main3(String[] args) {
        funcSwim(new Dick("青青"));
    }

    public static void main(String[] args) {
        Animal animal1=new Animal("豆豆");
        animal1.eat();
        Animal animal2=new Cat("扁扁");
        animal2.eat();
    }
}
