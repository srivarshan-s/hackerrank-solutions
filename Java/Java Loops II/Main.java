import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        for (int i = 0; i < q; i++) {
            int a = scan.nextInt();
            int b = scan.nextInt();
            int n = scan.nextInt();
            for (int j = 0; j < n; j++) {
                int sum = a;
                for (int k = 0; k <= j; k++) {
                    sum += pow(2, k) * b;
                }
                System.out.print(sum + " ");
            }
            System.out.println();
        }
        scan.close();
    }

    public static int pow(int num, int val) {
        if (val == 1) {
            return num;
        } else if (val == 0) {
            return 1;
        } else {
            return num * pow(num, val - 1);
        }
    }
}
