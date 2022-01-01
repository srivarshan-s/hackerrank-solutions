import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String string = scanner.next();
        int startIdx = scanner.nextInt();
        int endIdx = scanner.nextInt();

        String subString = string.substring(startIdx, endIdx);
        System.out.println(subString);
        
        scanner.close();
    }
}