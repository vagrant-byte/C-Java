package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

public class ReturnOperation implements IOperation {
    public ReturnOperation() {
        super();
    }

    @Override
    public void work(BookList bookList) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入你要归还图书的名字：");
        String name=scanner.nextLine();
        for (int i=0;i<bookList.getSize();i++) {
            Book book=bookList.getBook(i);
            if(book.getName().equals(name)) {
                System.out.println("归还成功");
                book.setBorrowed(false);
                return;
            }
        }
        System.out.println("没有你要归还的图书！");
    }
}
