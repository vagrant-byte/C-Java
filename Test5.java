 class B {
    public int Func() {
        System.out.print("B");
        return 0;
    }
}
 class D extends B {
    @Override
    public int Func() {
        System.out.print("D");
        return 0;
    }
}
class X {
    Y y=new Y();
    public X() {
        System.out.print("X");
    }
}
class Y {
    public Y() {
        System.out.print("Y");
    }
}
class Base {
    public Base() {
        System.out.print("B");
    }
}
public class Test5 extends Base{
    public static void main(String[] args) {
        new Test5();
        new Base();
    }
}
