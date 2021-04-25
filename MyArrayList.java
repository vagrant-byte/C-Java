import java.util.Arrays;

public class MyArrayList {
    public int[] elem;
    public int usedSize;
    //打印顺序表
    public void diaplay() {
        for (int i = 0; i <this.usedSize; i++) {
            System.out.print(this.elem[i]+" ");
        }
        System.out.println();
    }
    public MyArrayList() {
        this.elem=new int[5];
    }
    //判读数组是否满
    public boolean isFull(int[] elem) {
        if(this.elem.length==this.usedSize) {
            return true;
        }
        return false;
    }
    //增加元素
    public void add(int pos,int data) {
        //扩容
        if(isFull(this.elem)) {
            this.elem= Arrays.copyOf(this.elem,2*this.elem.length);
        }
        //判断添加元素位置是否合法
        if(pos<0||pos>this.usedSize) {
            return;
        }
        for (int i = pos; i <this.usedSize-1; i++) {
            this.elem[i+1]=this.elem[i];
        }
        this.elem[pos]=data;
        this.usedSize++;
    }
    //判读是否包含某个数
    public boolean contains(int toFind) {
        for (int i = 0; i <this.usedSize ; i++) {
            if(this.elem[i]==toFind) {
                return true;
            }
        }
        return false;
    }
    //查找元素对应下标
    public int search(int toFind) {
        for (int i = 0; i <this.usedSize ; i++) {
            if(this.elem[i]==toFind) {
                return i;
            }
        }
        return -1;
    }
    //获取pos 位置元素
    public int getPos(int pos) {
        if(pos<0||pos>=this.usedSize) {
            return -1;
        }
        return this.elem[pos];
    }
    //给pos 位置元素设为value
    public void setPos(int pos,int value) {
        if(pos<0||pos>=this.usedSize) {
            System.out.println("位置不合法");
        }
        this.elem[pos]=value;
    }
    //删除
    public void remove(int key) {
        int index=this.search(key);
        if(index==-1) {
            System.out.println("没有key关键字");
            return;
        }
        while (index<this.usedSize-1) {
            this.elem[index]=this.elem[index+1];
            index++;
        }
        this.usedSize--;
    }
    //获取顺序表长度
    public int size() {
        return this.usedSize;
    }
    //清空顺序表
    public void clear() {
        this.usedSize=0;
    }

}
