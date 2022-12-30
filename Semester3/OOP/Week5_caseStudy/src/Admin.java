

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Admin extends SystemUser {
    final String role = "Admin";

    public void deleteLandLord(Scanner sc) {
        List<LandLord> landLordList = Main.getLandlordDetails(role);
        if (landLordList.isEmpty()) {
            System.out.println("No landlord available");
        } else {
            Main.viewLandlord();
            System.out.println("Enter the ID to delete landlord");
            int choice = sc.nextInt();
            landLordList.remove(choice - 1);
            Main.setLandlordData(landLordList);
            System.out.println("Successfully deleted landlord!!!");
        }
    }

    public void addTenant(Scanner sc) {
        var choice = 1;
        boolean close = true;

        while (close) {
            System.out.println("""
                    Which type of tenant you want to add?
                    1. Family Type
                    2. Student Type
                    """);
            choice = sc.nextInt();
            switch (choice) {
                case 1 -> {
                    sc.nextLine();
                    FamilyTypeTenant familyTypeTenant = new FamilyTypeTenant();
                    System.out.println("Enter Sir name of Family");
                    String name = sc.nextLine();
                    familyTypeTenant.setName(name);
                    Main.addFamilyTypeTenant(familyTypeTenant);
                    System.out.println("Added Successfully!!");
                    close = false;
                }
                case 2 -> {
                    StudentTypeTenant std = new StudentTypeTenant();
                    sc.nextLine();
                    System.out.println("Enter  name of Student");
                    String stdName = sc.nextLine();
                    std.setName(stdName);
                    Main.addStudentTypeTenant(std);
                    System.out.println("Added Successfully!!");
                    close = false;
                }
                default -> System.out.println("Input not valid");
            }
        }
    }


    public void addLandlord(Scanner sc) {
        LandLord landLord = new LandLord();
        sc.nextLine();
        System.out.println("Enter landlord name");
        String name = sc.nextLine();

        landLord.setName(name);
        System.out.println("Enter contact number");
        String contactNumber = sc.nextLine();
        landLord.setContactInfo(contactNumber);
        System.out.println("Enter Rental fee");
        int rentalFee = sc.nextInt();
        sc.nextLine();
        landLord.setRentalFee(rentalFee);
        System.out.println("Enter property");
        String property = sc.nextLine();
        landLord.setProperty(property);
        Main.addLandlord(landLord);
        System.out.println("Successfully added landlord");
    }

    public void removeTenant(Scanner sc) {
        List<StudentTypeTenant> std = Main.getStudentTypeTenant();
        List<FamilyTypeTenant> fam = Main.getFamTenantList();
        System.out.println("""
                Which type of tenant you want to remove?
                1. Family Type
                2. Student Type
                """);
        int choice;
        try {
            choice = sc.nextInt();
        } catch (RuntimeException e) {
            choice = 3;
        }
        boolean end = true;
        while (end) {
            switch (choice) {
                case 1:
                    if (fam.isEmpty()) {
                        System.out.println("Sorry currently there tenant available");
                    } else {
                        Main.showTenantList(role);
                        System.out.println("Enter ID of tenant to remove");
                        int id = sc.nextInt() - 1;
                        fam.remove(id);
                        Main.setFamTenantList(fam);
                        end = false;
                        System.out.println("Successfully Removed!!!");
                    }
                    break;

                case 2:
                    if (std.isEmpty()) {
                        System.out.println("Sorry currently there tenant available");

                    } else {
                        Main.showTenantList(role);
                        System.out.println("Enter ID of tenant to remove");
                        int student = sc.nextInt() - 1;
                        std.remove(student);
                        Main.setStdTenantList(std);
                        end = false;
                        System.out.println("Successfully Removed!!!");
                        break;
                    }

                default:
                    System.out.println("Wrong input");
                    break;
            }
        }
    }

    @Override
    public void login(Scanner sc) {
        System.out.println("Welcome");
        System.out.println("Login as admin");

        int choice = 1;
        while (choice != 0) {

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
                    9. ViewTenant
                    10. Logout
                    """);
            int userInput;
            try {
                userInput = sc.nextInt();
            } catch (Exception e) {
                userInput = 11;
            }

            choice = userInput;
            switch (userInput) {
                case 0 -> System.out.println("Exited, See you soon");
                case 1 -> addLandlord(sc);
                case 2 -> {
                    Main.viewLandlord();
                    updateLandlord(sc);
                }
                case 3 -> deleteLandLord(sc);
                case 4 -> addTenant(sc);
                case 5 -> updateTenant(sc);
                case 6 -> removeTenant(sc);
                case 7 -> generateReport();
                case 8 -> Main.viewLandlord();
                case 9 -> Main.showTenantList(role);
                case 10 -> {
                    logout();
                    choice = 0;
                    Main.authentication(sc);
                }
                default -> System.out.println("Wrong Input");
            }

        }

    }

    @Override
    public void logout() {
        System.out.println("Logged out Successfully!!");

    }

    public void updateLandlord(Scanner sc) {
        sc.nextLine();
        List<LandLord> landLordList = Main.getLandlordDetails(role);
        System.out.println("Enter ID to Update landlord");
        int index = sc.nextInt() - 1;
        System.out.println("Enter the name");
        sc.nextLine();
        String name = sc.nextLine();
        System.out.println("Enter the RentalCharge");
        int rent = sc.nextInt();
        landLordList.get(index).setName(name);
        landLordList.get(index).setRentalFee(rent);
        System.out.println("Enter the property");
        sc.nextLine();
        String property = sc.nextLine();
        System.out.println("Enter the contact");
        String contact = sc.nextLine();
        landLordList.get(index).setProperty(property);
        landLordList.get(index).setContactInfo(contact);
        Main.setLandlordData(landLordList);
        System.out.println("Successfully updated");
        Main.viewLandlord();
    }

    public void updateTenant(Scanner sc) {
        List<StudentTypeTenant> std = Main.getStudentTypeTenant();
        List<FamilyTypeTenant> fam = Main.getFamTenantList();
        System.out.println("""
                Which type of tenant you want to Update?
                1. Family Type
                2. Student Type
                """);
        int choice;
        try {
            choice = sc.nextInt();
        } catch (RuntimeException e) {
            choice = 3;
        }
        boolean end = true;
        while (end) {
            switch (choice) {
                case 1:
                    if (fam.isEmpty()) {
                        System.out.println("Sorry currently there tenant available");
                    } else {

                        Main.showTenantList(role);
                        System.out.println("Enter ID of tenant to update");
                        int id = sc.nextInt() - 1;
                        System.out.println("Enter family sir name");
                        String sirName = sc.nextLine();
                        fam.get(id).setName(sirName);
                        Main.setFamTenantList(fam);
                        end = false;
                        System.out.println("Successfully Removed!!!");
                    }
                    break;

                case 2:
                    if (std.isEmpty()) {
                        System.out.println("Sorry currently there tenant available");

                    } else {
                        Main.showTenantList(role);
                        System.out.println("Enter ID of tenant to remove");
                        int student = sc.nextInt() - 1;
                        System.out.println("Enter Student name");
                        String name = sc.nextLine();
                        std.get(student).setName(name);
                        Main.setStdTenantList(std);
                        end = false;
                        System.out.println("Successfully Removed!!!");
                        break;
                    }

                default:
                    System.out.println("Wrong input");
                    break;
            }
        }
    }
    public void generateReport(){
        System.out.println("\t________CURRENT REPORT______");
        int landlordLen=Main.getLandlordDetails(role).size();
        int famTenantLen=Main.getFamTenantList().size();
        int stdTenantLen=Main.getStudentTypeTenant().size();
        System.out.println("Currently there are "+landlordLen+" Landlords");
        System.out.println("Currently there are "+famTenantLen+" family type tenants");
        System.out.println("Currently there are "+stdTenantLen+" student type tenants");
    }
}


