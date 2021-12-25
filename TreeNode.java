package 二叉树;

import java.util.*;

public class TreeNode {
    int val;
      TreeNode left;
      TreeNode right;
      TreeNode() {}
      TreeNode(int val) { this.val = val; }
      TreeNode(int val, TreeNode left, TreeNode right) {
          this.val = val;
          this.left = left;
          this.right = right;
      }
}
class Solution {
    public boolean isEvenOddTree(TreeNode root) {
        //使用一个队列存储每一行的元素 当队列为空时即完成
        Queue<TreeNode> queue=new ArrayDeque<>();
        queue.offer(root);
        //标记第几行
        int leave=0;
        while (!queue.isEmpty()) {
            //记录一行的长度用于循环
            int size=queue.size();
            //如果这一行是偶数，则严格递增，奇数则严格递减
            int prev=leave%2==0?Integer.MIN_VALUE:Integer.MAX_VALUE;
            for (int i = 0; i <size ; i++) {
                TreeNode node=queue.poll();
                int val=node.val;
                //奇数下标层所有节点值都是偶数，偶数下标值都是奇数，如果leav%2==val%2 则表示都是奇数或者都是偶数
                if(leave%2==val%2) {
                    return false;
                }
                //偶数下标严格递增 奇数下标严格递减
                if((leave%2==0&&val<=prev)||(leave%2==1&&val>=prev)) {
                    return false;
                }
                //进行当前层下一个值的判断
                prev=val;
                //左子树不为空，将左子树的值加如队列中即下一行的值
                if(node.left!=null) {
                    queue.offer(node.left);
                }
                //右子树不为空,将右子树加入队列中即下一行的数
                if(node.right!=null) {
                    queue.offer(node.right);
                }
            }
            //完成一次循环即进入下一行leave++
            leave++;
        }
        return true;
    }
}
