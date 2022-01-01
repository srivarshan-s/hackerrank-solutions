import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner scanner= new Scanner(System.in);
        String A = scanner.next();

        String revOfA = new StringBuilder(A).reverse().toString();
        if (A.compareTo(revOfA) == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }

        scanner.close();
    }
}