public class TestDemo5 {
    public static void main(String[] args) {
        MyArrayList myArrayList=new MyArrayList();
        myArrayList.add(0,1);
        myArrayList.add(1,2);
        myArrayList.add(2,3);
        myArrayList.add(3,4);
        myArrayList.add(4,5);
        myArrayList.add(5,6);
        //myArrayList.diaplay();
        System.out.println(myArrayList.contains(7));
        System.out.println(myArrayList.search(3));
        System.out.println(myArrayList.getPos(2));
        myArrayList.setPos(5,66);
        myArrayList.diaplay();
        myArrayList.remove(1);
        myArrayList.diaplay();
        System.out.println(myArrayList.size());
        myArrayList.clear();
        myArrayList.diaplay();
    }
}
