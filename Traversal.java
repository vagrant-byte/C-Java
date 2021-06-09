class TreeNode {
    public char val;
    public TreeNode left;
    public TreeNode right;

    public TreeNode(char val) {
        this.val = val;
    }
}

public class Traversal {
    //构造树
    public TreeNode createTree() {
        TreeNode A=new TreeNode('A');
        TreeNode B=new TreeNode('B');
        TreeNode C=new TreeNode('C');
        TreeNode D=new TreeNode('D');
        TreeNode E=new TreeNode('E');
        TreeNode F=new TreeNode('F');
        TreeNode G=new TreeNode('G');
        TreeNode H=new TreeNode('H');
        A.right=C;
        A.left=B;
        B.right=E;
        B.left=D;
        C.right=G;
        C.left=F;
        E.right=H;
        return A;
    }
    // 前序遍历
    void preOrderTraversal(TreeNode root){
        if (root==null) {
            return;
        }
        System.out.print(root.val+" ");
        preOrderTraversal(root.left);
        preOrderTraversal(root.right);

    }
    // 中序遍历
    void inOrderTraversal(TreeNode root) {
        if (root==null) {
            return;
        }
        inOrderTraversal(root.left);
        System.out.print(root.val+" ");
        inOrderTraversal(root.right);
    }
    // 后序遍历
    void postOrderTraversal(TreeNode root) {
        if (root==null) {
            return;
        }
        postOrderTraversal(root.left);
        postOrderTraversal(root.right);
        System.out.print(root.val+" ");
    }
    // 遍历思路-求结点个数
    static int size = 0;
    void getSize1(TreeNode root) {
        if (root==null) {
            return;
        }
        size++;
        preOrderTraversal(root.left);
        preOrderTraversal(root.right);
    }
    // 子问题思路-求结点个数
    int getSize2(TreeNode root) {
        if (root==null) {
            return 0;
        }
        return getSize2(root.right)+getSize2(root.left)+1;
    }

    public static void main(String[] args) {
        Traversal traversal=new Traversal();
        TreeNode root=traversal.createTree();
        traversal.preOrderTraversal(root);
        System.out.println();
        traversal.inOrderTraversal(root);
        System.out.println();
        traversal.postOrderTraversal(root);
        System.out.println();
        System.out.println(traversal.getSize2(root));

    }
}
