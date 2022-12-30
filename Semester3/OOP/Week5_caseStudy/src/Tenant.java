import java.util.Scanner;

abstract public class Tenant extends SystemUser{
    @Override
    public  void login(Scanner sc){

    }
    @Override
    public void logout(){
        System.out.println("LogOut Successfully!!!");
    }
}
interface TenantRights {

    void leaveRoom();

    void requestPayment();

    void reviewLandlord();

    void reviewRentalProperty();

}

class StudentTypeTenant extends SystemUser implements TenantRights{
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
     @Override
    public void login(Scanner sc)
     {

     }
     @Override
    public  void logout()
     {

     }
     @Override
     public void leaveRoom(){}

    @Override
    public  void requestPayment(){}

    @Override
    public  void reviewLandlord(){}

    @Override
    public void reviewRentalProperty(){}

}

class FamilyTypeTenant extends SystemUser implements TenantRights{
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }


    @Override
    public void login(Scanner sc)
    {

    }
    @Override
    public  void logout()
    {

    }
    @Override
    public void leaveRoom(){}

    @Override
    public  void requestPayment(){}

    @Override
    public  void reviewLandlord(){}

    @Override
    public void reviewRentalProperty(){}

}
