import java.util.Arrays;

public  class HomeWork5 {
        //private static int x = 100;
        public static void main1(String[] args) {
               HomeWork5 h1=new HomeWork5();
          //     h1.x++;
        }

        public static void main2(String[] args) {
                int[] array={1,3,5,4,2,9,8};
                int left=0;
                int right=array.length-1;
                while (left<right) {
                        if(array[left]%2==0) {
                                left++;
                        } else if (array[right]%2!=0) {
                                right--;
                        } else {
                                int tmp=array[left];
                                array[left]=array[right];
                                array[right]=tmp;
                                //left++;
                                //right--;
                        }
                }
                System.out.println(Arrays.toString(array));
        }

        public static void main(String[] args) {
                int[] array1={1,2,3};
                int[] array2={4,5,6};
                int[] tmp=new int[array1.length];
                for (int i = 0; i <array1.length ; i++) {
                        tmp[i]=array1[i];
                        array1[i]=array2[i];
                        array2[i]=tmp[i];
                }
                System.out.println(Arrays.toString(array1));
                System.out.println(Arrays.toString(array2));
        }
}