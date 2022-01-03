import java.util.Scanner;
import java.util.regex.*;

public class Solution
{
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int testCases = Integer.parseInt(scanner.nextLine());
		while (testCases > 0) {
			String pattern = scanner.nextLine();
			try {
				Pattern.compile(pattern);
				System.out.println("Valid");
			} catch (Exception e) {
				System.out.println("Invalid");
			}
			testCases--;
		}
	}
}
