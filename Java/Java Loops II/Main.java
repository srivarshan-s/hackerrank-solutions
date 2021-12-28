import java.util.*;
import java.io.*;

class Main {
    public static void main(String []argh){
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        for (int i = 0; i < q; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int n = scan.nextInt();
            for (int j = 0; j < n; j++) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
        scan.close();
    }
}
