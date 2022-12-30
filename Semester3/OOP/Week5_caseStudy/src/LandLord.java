import java.util.Scanner;

interface LandlordRights {

    void giveNotice();

    void reviewTenant();

    void requestPayment();
}

public class LandLord extends SystemUser implements  LandlordRights{
    final String role="Landlord";
    @Override
    public  void giveNotice(){}

    @Override
    public  void reviewTenant(){}

    @Override
    public  void requestPayment(){}



    @Override
    public  void logout(

    ){
        System.out.println("Successfully logout!!!");
    }
    @Override
    public void login(Scanner scanner){
        System.out.println("\tWelcome");
        System.out.println("Logged in as Landlord");

        boolean exit=true;
        while (exit)
        {
            System.out.println("""
                0. Exit
                1. View Tenant
                2. Add bill
                3. View Number of Tenant
                4. Logout
                """);
            int choice =scanner.nextInt();
            switch (choice){
                case 0:
                    System.out.println("Sucessfully Exited");
                    exit=false;
                    break;

                case 1:
                     try
                     {
                         Main.showTenantList(role);
                     }
                     catch (Exception e)
                     {
                         System.out.println(e.toString());

                     }
                    break;

                case 2:
                    System.out.println("Add bill");
                    break;

                case 3:

                    System.out.println("There are "+(Main.getFamTenantList().size()+Main.getStudentTypeTenant().size())+" Tenant");
                    break;

                case 4:
                    logout();
                    exit=false;
                    Main.authentication(scanner);
                    break;

                default:
                    System.out.println("Incorrect input");
            }
        }

    }

    private String name;
    private  String property;
    private String contactInfo;
    private int rentalFee;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getProperty() {
        return property;
    }

    public void setProperty(String property) {
        this.property = property;
    }

    public String getContactInfo() {
        return contactInfo;
    }

    public void setContactInfo(String contactInfo) {
        this.contactInfo = contactInfo;
    }

    public int getRentalFee() {
        return rentalFee;
    }

    public void setRentalFee(int rentalFee) {
        this.rentalFee = rentalFee;
    }

    public void displayLandlordInfo(LandLord landLord)
    {
        System.out.println("Name:"+landLord.getName());
        System.out.println("Contact:"+landLord.getContactInfo());
        System.out.println("Property:"+landLord.getProperty());
        System.out.println("RentalFee:"+landLord.getRentalFee());
    }

}
