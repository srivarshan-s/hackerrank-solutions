import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String string, int k) {
        int smallIdx = 0;
        int largeIdx = 0;
        for (int i = 0; i < string.length() - k + 1; i++) {
            String subString = string.substring(i, i + k);
            if (subString.compareTo(string.substring(smallIdx, smallIdx + k)) <= 0) {
                smallIdx = i;
            }
            if (subString.compareTo(string.substring(largeIdx, largeIdx + k)) >= 0) {
                largeIdx = i;
            }
        }
        return string.substring(smallIdx, smallIdx + k) + "\n" + string.substring(largeIdx, largeIdx + k);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();

        System.out.println(getSmallestAndLargest(s, k));
    }
}