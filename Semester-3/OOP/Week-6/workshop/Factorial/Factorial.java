package workshop.Factorial;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        int n;
        int fac = 1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number:");
        n = sc.nextInt();
        System.out.println("\n");
        while (n != 0) {
            fac *= n;
            n = n - 1;
        }
        sc.close();
        System.out.println(fac);
    }
}

//time complexity=0(n)