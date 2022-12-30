import java.util.Scanner;

abstract public class Tenant extends SystemUser{
    @Override
    public  void login(Scanner sc){
        System.out.println("\tWelcome");
        System.out.println("Logged in as Tenant");
    }
    @Override
    public void logout(){
        System.out.println("LogOut Successfully!!!");
    }
}
