package operation;

import book.Book;
import book.BookList;

import java.util.Scanner;

public class AddOperation implements IOperation{
    @Override
    public void work(BookList bookList) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入要添加的书名:");
        String name=scanner.nextLine();
        System.out.println("请输入图书的作者:");
        String author=scanner.nextLine();
        System.out.println("请输入图书的价格：");
        double price=scanner.nextInt();
        System.out.println("请输入图书类型：");
        String type=scanner.next();
        Book book=new Book(name,author,price,type);
        int count=bookList.getSize();
        bookList.setBooks(count,book);
        bookList.setSize(count+1);
        System.out.println("新增成功");
    }
}
