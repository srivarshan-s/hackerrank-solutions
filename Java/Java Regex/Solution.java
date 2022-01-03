import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;

class Solution {

    public static void main(String[] args) {
	Scanner scanner = new Scanner(System.in);
	while(scanner.hasNext()){
	    String IP = scanner.next();
	    System.out.println(IP.matches(new MyRegex().pattern));
	}

    }
}

//Write your code here
class MyRegex {
    String zeroTo255
	= "(\\d{1,2}|(0|1)\\"
	+ "d{2}|2[0-4]\\d|25[0-5])";
    String pattern
	= zeroTo255 + "\\."
	+ zeroTo255 + "\\."
	+ zeroTo255 + "\\."
	+ zeroTo255;
}
