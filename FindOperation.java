package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

public class FindOperation implements IOperation {
    public FindOperation() {
        super();
    }

    @Override
    public void work(BookList bookList) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入借阅书籍名称：");
        String name=scanner.nextLine();
        for (int i=0;i<bookList.getSize();i++) {
            Book book=bookList.getBook(i);
            if(book.getName().equals(name)) {
                System.out.println("查找成功");
                System.out.println(book);
                return;
            }
        }
        System.out.println(("没有你要查找的图书"));
    }
}
