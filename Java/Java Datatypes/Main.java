import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int q = scan.nextInt();
        for (int i = 0; i < q; i++) {
            try {
                long num = scan.nextLong();
                System.out.println(num + " can be fitted in:");
                if (num >= -128 && num <= 127) {
                    System.out.println("* byte");
                } else if (num >= -32768 && num <= 32767) {
                    System.out.println("* short");
                } else if (num >= pow(-2, 31) && num <= pow(2, 31)-1) {
                    System.out.println("* int");
                } else if (num >= pow(-2, 63) && num <= pow(2, 63)-1) {
                    System.out.println("* int");
                }
            } catch (Exception e) {
                System.out.println(scan.next() + " can't be fitted anywhere.");
            }
        }

        scan.close();
    }

    public static long pow(long num, long val) {
        if (val == 0) return 1;
        if (val == 1) return num;
        return pow(num, val-1);
    }
}


/* import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {

            try {
                long x = sc.nextLong();
                System.out.println(x + " can be fitted in:");
                if (x >= -128 && x <= 127)
                    System.out.println("* byte");
                // Complete the code
            } catch (Exception e) {
                System.out.println(sc.next() + " can't be fitted anywhere.");
            }

        }
    }
} */
