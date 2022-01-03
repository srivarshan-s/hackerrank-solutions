// TODO: Complete solution

/*
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class DuplicateWords {

    public static void main(String[] args) {

        // String regex = " Write a RegEx matching repeated words here. ";
        // Pattern p = Pattern.compile(regex,  Insert the correct Pattern flag here.);

        Scanner in = new Scanner(System.in);
        int numSentences = Integer.parseInt(in.nextLine());
        
        while (numSentences-- > 0) {
            String input = in.nextLine();
            
            Matcher m = p.matcher(input);
            
            // Check for subsequences of input that match the compiled pattern
            while (m.find()) {
                // input = input.replaceAll( The regex to replace ,  The replacement. );
            }
            
            // Prints the modified sentence.
            System.out.println(input);
        }
        
        in.close();
    }
}
*/

import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		while (num > 0) {
			String string = scanner.nextLine();
			String[] stringArray = string.split(" ");
			for (String ele: stringArray) {
				System.out.print(ele + " ");
			}
			System.out.println();
			num--;
		}
		scanner.close();
	}
}
