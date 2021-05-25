package user;

import book.BookList;
import operation.IOperation;

abstract public class User {
    protected String name;

    public User(String name) {
        this.name=name;
    }

    protected IOperation[] operations;
    abstract public  int menu();
    public void doOperation(int choice, BookList bookList) {
        operations[choice].work(bookList);
    }
}
