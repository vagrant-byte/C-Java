package jdbc;

import jdbc.operation.IOperation;

//针对isAdmin 并不是使用boolean变量来区分 而是使用两个不同的子类
//原因是，管理员和普通用户支持的方法是不一样的
abstract public class User {
    private int userid;
    private String username;
    private String password;
    //包含一个数组，数组里边就是该用户支持那些操作
    //针对普通用户和管理员分别设置不同的操作
    protected IOperation[] operations;
    //普通用户和管理员看到的菜单
    abstract public int menu();

    public int getUserid() {
        return userid;
    }

    public void setUserid(int userid) {
        this.userid = userid;
    }

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    @Override
    public String toString() {
        return "User{" +
                "userid=" + userid +
                ", username='" + username + '\'' +
                ", password='" + password + '\'' +
                '}';
    }
}
