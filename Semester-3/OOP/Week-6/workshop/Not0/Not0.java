package workshop.Not0;

import java.util.Scanner;

public class Not0 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int sum = 0;
        System.out.println("Enter a number");
        n = sc.nextInt();
        while (n != 0) {
            sum += n;
            System.out.println("Enter a number");
            n = sc.nextInt();
        }
        sc.close();
        System.out.println("Your number is:" + sum);
    }
}


//time complexity=0(n)