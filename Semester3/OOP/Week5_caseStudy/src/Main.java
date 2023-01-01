import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.function.Function;

public class Main {
    private static List<LandLord> landlordData = new ArrayList<LandLord>();
    private static List<StudentTypeTenant> stdTenantList = new ArrayList<StudentTypeTenant>();
    private static List<FamilyTypeTenant> famTenantList = new ArrayList<FamilyTypeTenant>();

    public static List<StudentTypeTenant> getStudentTypeTenant() {
        return stdTenantList;
    }

    public static List<FamilyTypeTenant> getFamTenantList() {
        return famTenantList;
    }

    public static void setStdTenantList(List<StudentTypeTenant> list) {
        stdTenantList = list;
    }

    public static void setFamTenantList(List<FamilyTypeTenant> list) {
        famTenantList = list;
    }

    public static void showTenantList(String role) {
        if (role.equals("Admin") || role.equals("Landlord")) {
            if (famTenantList.isEmpty()) {
                System.out.println("There are no family type tenant currently!!!");
            } else {
                System.out.println("Family type Tenant");
                for (int i = 0; i < famTenantList.size(); i++) {
                    System.out.println("ID:" + (i + 1));
                    System.out.println("Name:" + famTenantList.get(i).getName());
                }
            }
            System.out.println("\n");
            if (stdTenantList.isEmpty()) {
                System.out.println("There are no StdTenant available");
            } else {
                System.out.println("\tStudent type Tenant\n");
                for (int i = 0; i < stdTenantList.size(); i++) {
                    System.out.println("ID:" + (i + 1));
                    System.out.println("Name:" + stdTenantList.get(i).getName());
                }
            }

        } else {
            throw new AccessForbiddenError("Access denied");
        }
    }

    public static void addFamilyTypeTenant(FamilyTypeTenant familyTypeTenant) {
        famTenantList.add(familyTypeTenant);
    }

    public static void addStudentTypeTenant(StudentTypeTenant studentTypeTenant) {
        stdTenantList.add(studentTypeTenant);
    }

    public static void setLandlordData(List<LandLord> landLordList) {
        landlordData = landLordList;
    }

    public static void viewLandlord() {
        if (landlordData.isEmpty()) {
            System.out.println("Sorry currently there are no landlords");
        } else {
            for (int i = 0; i < landlordData.size(); i++) {
                System.out.println("ID:" + (i + 1));
                System.out.println("Name:" + landlordData.get(i).getName());
                System.out.println("RentalCharge:" + landlordData.get(i).getRentalFee());
                System.out.println("Property:" + landlordData.get(i).getProperty());
                System.out.println("Contact:" + landlordData.get(i).getContactInfo());
                System.out.println("\n\n");
            }
        }
    }

    public static void addLandlord(LandLord landLord) {
        Main.landlordData.add(landLord);
    }

    public static List<LandLord> getLandlordDetails(String role) {
        if (role.equals("Admin")) {
            return landlordData;
        } else {
            throw new AccessForbiddenError("Access Denied!!!!");
        }

    }

    public static void authentication(Scanner sc) {
        Auth auth = new Auth();
        String role;
        while (true) {
            System.out.println("Press Enter key to continue");
            sc.nextLine();
            System.out.println("Enter username");
            String username = sc.nextLine();

            System.out.println("Enter your Password");
            String password = sc.nextLine();

            try {
                role = auth.getUserRole(username, password);
                break;

            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        switch (role) {
            case "Admin":
                Admin admin = new Admin();
                admin.login(sc);
                break;

            case "Landlord":
                LandLord landLord = new LandLord();
                landLord.login(sc);
                break;

            case "Tenant":
                System.out.println("""
                        choose mode:
                        1.Family Type Tenant
                        2.Student Type Tenant
                        """);
                int choice = sc.nextInt();
                if (choice == 1) {
                    FamilyTypeTenant fam = new FamilyTypeTenant();
                    fam.login(sc);

                } else {
                    StudentTypeTenant studentTypeTenant = new StudentTypeTenant();
                    studentTypeTenant.login(sc);
                }

            default:
                break;

        }
    }

    public static void main(String[] args) {
        System.out.println("\t\tRental Management System");
        System.out.println("\t\t   Login to Continue");
        Scanner sc = new Scanner(System.in);
        Main.authentication(sc);
        sc.close();

    }
}

class AccessForbiddenError extends RuntimeException {
    public AccessForbiddenError(String e) {
        super(e);
    }
}