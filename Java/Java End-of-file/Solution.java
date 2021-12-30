import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int idx = 1;
        while (scan.hasNext()) {
            String temp = scan.nextLine();
            System.out.println(idx + " " + temp);
            idx++;
        }
        scan.close();
    }
}
