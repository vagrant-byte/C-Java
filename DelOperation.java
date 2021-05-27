package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

public class DelOperation implements IOperation{

    @Override
    public void work(BookList bookList) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入你要删除书籍的名称：");
        String name=scanner.nextLine();
        int i=0;
        for (i=0;i<bookList.getSize();i++) {
            Book book=bookList.getBook(i);
            if(book.getName().equals(name)) {
                break;
            }
        }
        if(i==bookList.getSize()) {
            System.out.println("没有你要删除的图书");
        }
        for (int index=i;index<bookList.getSize()-1;index++) {
            Book book=bookList.getBook(index+1);
            bookList.setBooks(index,book);
        }
        System.out.println("删除成功");
        bookList.setSize(bookList.getSize()-1);
    }
}
