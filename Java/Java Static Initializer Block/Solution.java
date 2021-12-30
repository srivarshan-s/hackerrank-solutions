import java.util.*;

public class Solution {

    // Write your code here
    public static Scanner scan = new Scanner(System.in);
    public static boolean flag = true;
    public static int B;
    public static int H;
    static {
        B = scan.nextInt();
        H = scan.nextInt();
        try {
            if (B <= 0 || H <= 0) {
                throw new Exception();
            }
        } catch (Exception e) {
            System.out.println(e + ": Breadth and height must be positive");
            flag = false;
        }
    }

    public static void main(String[] args) {
        if (flag) {
            int area = B * H;
            System.out.print(area);
        }

    }// end of main

}// end of class
