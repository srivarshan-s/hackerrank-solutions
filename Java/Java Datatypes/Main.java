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
                }
            } catch (Exception e) {
                //TODO: handle exception
            }
        }

        scan.close();
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
