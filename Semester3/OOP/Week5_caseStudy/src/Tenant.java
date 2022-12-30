import java.util.ArrayList;
import java.util.Scanner;

abstract public class Tenant extends SystemUser implements TenantRights{
    abstract void viewLandlord();
    abstract void selectLandlord(ArrayList<LandLord> landlordData);


    @Override
    public  void login(Scanner scanner){
        scanner.nextLine();
        System.out.println("Welcome Tenant");
       boolean isNotQuit=true;
       while (isNotQuit)
       {
           System.out.println("""

                    What would you like to do?

                    1) View Landlord
                    2) Select Landlord
                    3) Leave Room
                    4) Due Payment
                    5) Review Landlord
                    6) Review Rental Property
                    7) Logout
                    """);

           int choice;
           try {
               choice = scanner.nextInt();
           } catch (InputMissMatchException e) {
               choice = 9;
           }
           switch (choice) {
               case 1:
                   viewLandlord();
                   break;
               case 2:
                   selectLandlord(null);
                   break;
               case 3:
                   leaveRoom();
                   break;
               case 4:
                   duePayment();
                   break;
               case 5:
                   reviewLandlord(scanner);
                   break;
               case 6:
                   reviewRentalProperty(scanner);
                   break;
               case 7:
                   logout();
                   isNotQuit=false;
                   Main.authentication(scanner);
                   break;
               default:
                   System.out.println("Wrong Input!");
                   break;

           }

       }


    }
    @Override
    public void logout(){
        System.out.println("LogOut Successfully!!!");
    }
}
interface TenantRights {

    void leaveRoom();

    void duePayment();

    void reviewLandlord(Scanner sc);

    void reviewRentalProperty(Scanner sc);

}

class StudentTypeTenant extends Tenant{
    private String name;

    @Override
    public  void viewLandlord(){
        Main.viewLandlord();
    }

    @Override
    public void selectLandlord(ArrayList<LandLord> landlordData){
        System.out.println("Selected landlord successfully");
    };


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
     @Override
     public void leaveRoom(){
         System.out.println("Room left Successfully");
     }

    @Override
    public  void duePayment(){
        System.out.println("Notified");
    }

    @Override
    public  void reviewLandlord(Scanner sc){
        sc.nextLine();
        System.out.println("Enter your review");
        String review=sc.nextLine();
        System.out.println("Thanks for you review!!!!s");
    }

    @Override
    public void reviewRentalProperty(Scanner sc){
        sc.nextLine();
        System.out.println("Enter your review");
        String review=sc.nextLine();
        System.out.println("Thanks for you review!!!!s");
    }

}

class FamilyTypeTenant extends Tenant{
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }


    @Override
    void viewLandlord() {
        Main.viewLandlord();

    }

    @Override
    void selectLandlord(ArrayList<LandLord> landlordData) {
        System.out.println("Selected landlord successfully");

    }
    @Override
    public void leaveRoom() {
        System.out.println("Room left");
    }

    @Override
    public void duePayment() {
        System.out.println("Notified");
    }

    @Override
    public void reviewLandlord(Scanner sc) {
        sc.nextLine();
        System.out.println("Enter your review");
        String review=sc.nextLine();
        System.out.println("Thanks for you review!!!!");
    }

    @Override
    public void reviewRentalProperty(Scanner sc) {
        sc.nextLine();
        System.out.println("Enter your review");
        String review=sc.nextLine();
        System.out.println("Thanks for you review!!!!");
    }

}