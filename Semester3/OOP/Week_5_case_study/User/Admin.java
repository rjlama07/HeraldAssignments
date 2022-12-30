import java.util.Scanner;

class Admin extends SystemUser {
    @Override
    public void login(Scanner sc) {
        System.out.println("Welcome");
        System.out.println("Login as admin");
        System.out.println("Enter the key to use the function");
        System.out.println("""
                1. Add Landlord
                2. Update Landlord
                3. Delete Landlord
                4. Add Tenant
                5. Update Tenant
                6. Delete Tenant
                7. Generate Report
                8. Logout
                """);
        int userInput = sc.nextInt();
        switch (userInput) {
            case 1:
                System.out.println("Choose 1");
                break;

            case 2:
                System.out.println("Choice 2");
                break;

            case 3:
                System.out.println("Choose 3");
                break;

            case 4:
                System.out.println("Choice 4");
                break;
            case 5:
                System.out.println("Choose 5");
                break;

            case 6:
                System.out.println("Choice 6");
                break;

            case 7:
                System.out.println("Choose 7");
                break;

            case 8:
                System.out.println("Choice 8");
                break;

            default:
                System.out.println("Wrong Input");
        }

    }

    @Override
    public void logout() {
        System.out.println("Logged out Sucessfully!!");

    }

}