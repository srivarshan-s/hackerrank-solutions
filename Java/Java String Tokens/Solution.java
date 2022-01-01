import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String string = scan.nextLine();

        String[] tokens = string.split("[ !,?._'@]");

        int numOfTokens = 0;
        for (String token : tokens) {
            if (token.compareTo(new String(" ")) == -1) {
                continue;
            }
            numOfTokens++;
        }
        System.out.println(numOfTokens);

        for (String token : tokens) {
            if (token.compareTo(new String(" ")) == -1) {
                continue;
            }
            System.out.println(token);
        }

        scan.close();
    }
}

