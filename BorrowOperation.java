package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

public class BorrowOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入借阅书籍名称：");
        String name=scanner.nextLine();
        for (int i=0;i<bookList.getSize();i++) {
            Book book=bookList.getBook(i);
            if(book.getName().equals(name)&&!book.isBorrowed()) {
                book.setBorrowed(true);
                System.out.println("借阅成功");
                return;
            }
        }
        System.out.println("借阅失败！没有你要借阅的书籍或者已经借阅");
    }
}
