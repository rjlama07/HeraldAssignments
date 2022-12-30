import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Auth auth = new Auth();
        String role = "null";
        System.out.println("\t\tRental Management System");
        System.out.println("\t\t   Login to Continue");
        Scanner sc = new Scanner(System.in);

        while (true) {
            System.out.println("Enter username");
            String username = sc.nextLine();
            System.out.println("Enter your PAssword");
            String password = sc.nextLine();

            sc.close();
            try {
                role = auth.getUserRole(username, password);
                break;

            } catch (Exception e) {
                System.out.println(e.toString());
            }
        }
        System.out.println(role);

    }

}