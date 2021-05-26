package book;

public class BookList {
    private Book[] books=new Book[13];
    private int size=0;
    public BookList() {
        books[0]=new Book("三国演义","罗贯中",23,"小说");
        books[1]=new Book("西游记","吴承恩",13,"小说");
        books[2]=new Book("水浒传","施耐庵",26,"小说");
        this.size=3;
    }

    public void setBooks(int pos,Book book) {
        this.books[pos]=book;
    }
    public Book getBook(int pos) {
        return books[pos];
    }
    public int getSize() {
        return size;
    }

    public void setSize(int size) {
        this.size = size;
    }
}
