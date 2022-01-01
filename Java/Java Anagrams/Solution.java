import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Solution {

    static boolean isAnagram(String a, String b) {
        char[] arrayA = a.toLowerCase().toCharArray();
        char[] arrayB = b.toLowerCase().toCharArray();
        java.util.Arrays.sort(arrayA);
        java.util.Arrays.sort(arrayB);
        
        String A = new String(arrayA);
        String B = new String(arrayB);

        if (A.compareTo(B) != 0) {
            return false;
        }

        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}