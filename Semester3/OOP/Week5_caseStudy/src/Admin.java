import jdk.jfr.Frequency;

import java.util.List;
import java.util.Scanner;

class Admin extends SystemUser {
    final String role="Admin";
    public void deleteLandLord(Scanner sc){
        List<LandLord> landLordList=Main.getLandlordDetails(role);
        if (landLordList.isEmpty())
        {
            System.out.println("No landlord available");
        }
        else {
            Main.viewLandlord();
            System.out.println("Enter the ID to delete landlord");
            int choice=sc.nextInt();
            landLordList.remove(choice-1);
            Main.setLandlordData(landLordList);
            System.out.println("Successfully deleted landlord!!!");
        }
    }


    public void addLandlord(Scanner sc){
        LandLord landLord=new LandLord();
        sc.nextLine();
        System.out.println("Enter landlord name");
        String name=sc.nextLine();

        landLord.setName(name);
        System.out.println("Enter contact number");
        String contactNumber=sc.nextLine();
        landLord.setContactInfo(contactNumber);
        System.out.println("Enter Rental fee");
        int rentalFee=sc.nextInt();
        sc.nextLine();
        landLord.setRentalFee(rentalFee);
        System.out.println("Enter property");
        String property=sc.nextLine();
        landLord.setProperty(property);
        Main.addLandlord(landLord);
        System.out.println("Sucessfully added landlord");
    }
    @Override
    public void login(Scanner sc) {
        System.out.println("Welcome");
        System.out.println("Login as admin");

        int choice = 1;
        while (choice!=0){

            System.out.println("""
                0. Exit
                1. Add Landlord
                2. Update Landlord
                3. Delete Landlord
                4. Add Tenant
                5. Update Tenant
                6. Delete Tenant
                7. Generate Report
                8. ShowLandlord
                9. Logout
                """);
            int userInput = sc.nextInt();
            choice=userInput;
            switch (userInput) {
                case 0:
                    System.out.println("Exited, See you soon");
                    break;
                case 1:
                    addLandlord(sc);
                    break;

                case 2:
                    Main.viewLandlord();
                    updateLandlord(sc);
                    break;

                case 3:
                    deleteLandLord(sc);

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
                    Main.viewLandlord();
                    break;

                case 9:
                    logout();
                    choice=0;
                    Main.authentication(sc);
                    break;

                default:
                    System.out.println("Wrong Input");
            }

        }

    }

    @Override
    public void logout() {
        System.out.println("Logged out Sucessfully!!");

    }
    public  void updateLandlord(Scanner sc){
        sc.nextLine();
         List<LandLord> landLordList=Main.getLandlordDetails(role);
        System.out.println("Enter ID to Update landlord");
        int index=sc.nextInt()-1;
        System.out.println("Enter the name");
        sc.nextLine();
        String name= sc.nextLine();
        System.out.println("Enter the RentalCharge");
        int rent= sc.nextInt();
        landLordList.get(index).setName(name);
        landLordList.get(index).setRentalFee(rent);
        System.out.println("Enter the property");
        sc.nextLine();
        String property= sc.nextLine();
        System.out.println("Enter the contact");
        String contact= sc.nextLine();
        landLordList.get(index).setProperty(property);
        landLordList.get(index).setContactInfo(contact);
        Main.setLandlordData(landLordList);
        System.out.println("Successfully updated");
        Main.viewLandlord();
    }
    }


