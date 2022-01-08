import java.util.*;
import java.util.regex.*;

public class Solution {
	public static void main(String[] args){
		
		Scanner scanner = new Scanner(System.in);
		int testCases = Integer.parseInt(scanner.nextLine());
		while(testCases>0){
			String line = scanner.nextLine();
			
            Pattern pattern = Pattern.compile("<(.+)>(([^<>]+))</\\1>");
            Matcher matcher = pattern.matcher(line);
            if (matcher.find()) {
                String result = matcher.group(2);
                System.out.println(result);
            } else {
                System.out.println("None");
            }

            testCases--;
        }
        scanner.close();
    }
}
