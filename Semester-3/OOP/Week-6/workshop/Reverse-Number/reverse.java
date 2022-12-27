import java.util.Scanner;

public class reverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        while (true) {
            System.out.println("Enter a number");
            n = sc.nextInt();
            if (n > 999) {
                break;
            }
            System.out.println("Invalid ");

        }
        sc.close();
        int sum = 0;
        while (n > 0) {
            int temp = n % 10;
            sum += temp;
            n = n / 10;
        }
        System.out.println(sum);

    }
}

// time complexity=0(n)