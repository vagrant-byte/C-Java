import java.util.*;
class Person {
    private String name;
    private String cls;
    private double num;

    @Override
    public String toString() {
        return "Person{" +
                "name='" + name + '\'' +
                ", cls='" + cls + '\'' +
                ", num=" + num +
                '}';
    }

    public Person(String name, String cls, double num) {
        this.name=name;
        this.cls=cls;
        this.num=num;
    }
}
public class Test13 {
    public static void main(String[] args) {
        String str1="welcome to bit";
        String sre2="come";
        ArrayList<Character> list=new ArrayList<>();
        for (int i = 0; i <str1.length() ; i++) {
            /*for (int j = 0; j <sre2.length() ; j++) {
                if(str1.charAt(i)!=sre2.charAt(j)) {
                    list.add(str1.charAt(i));
                }
            }*/
            char ch=str1.charAt(i);
            if(!sre2.contains(ch+"")) {
                list.add(ch);
            }
        }
        System.out.println(list);
        for (int i = 0; i <list.size() ; i++) {
            System.out.print(list.get(i));
        }
    }
    public static void main2(String[] args) {
        ArrayList<Person> list=new ArrayList<>();
        list.add(new Person("张三","二班",99));
        list.add(new Person("王五","二班",88));
        System.out.println(list);
    }
    public static void main1(String[] args) {
        ArrayList<Integer> list=new ArrayList<>();
        list.add(2);
        list.add(5);
        list.add(1);
        Collections.sort(list);
        System.out.println(list);
    }
}
