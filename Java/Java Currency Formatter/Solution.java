import java.util.*;
import java.text.NumberFormat;
import java.util.Locale;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        NumberFormat usFormat = NumberFormat.getCurrencyInstance(Locale.US);
        NumberFormat chinaFormat = NumberFormat.getCurrencyInstance(Locale.CHINA);
        NumberFormat franceFormat = NumberFormat.getCurrencyInstance(Locale.FRANCE);

        String us = usFormat.format(payment);
        String china = chinaFormat.format(payment);
        String france = franceFormat.format(payment);

        Locale INDIA = new Locale("EN", "IN");
        NumberFormat indiaFormat = NumberFormat.getCurrencyInstance(INDIA);

        String india = indiaFormat.format(payment);

        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}