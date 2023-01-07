import java.util.HashMap;
import java.util.Locale;

public class Banking {
    Banking(String bankName){
        System.out.println(bankName+" Banking system");
    }
    private String userName;
    private Float amount;
    private int choice;

    String getUsername(){
        return this.userName;
    }
    void setUsername(String userName){
        this.userName=userName;
    }

    Float getAmount(){
        return this.amount;
    }
    void setAmount(float amount)
    {
        this.amount=amount;
    }
    HashMap<String, Float> userInfo=new HashMap<>();
    void createAccount(String userName,float amount){
        userName=userName.toLowerCase();
        if (userInfo.containsKey(userName))
        {
            System.out.println("Account already exist");
        }
        else {
            if(amount>=0)
            {
                userInfo.put(userName,amount);
            }
            else {
                System.out.println("Please! input valid information");
            }
        }

    }



}

class Siddhartha{
    public static void main(String[] args) {
        Banking siddhartha=new Banking("Siddhartha");
        siddhartha.createAccount("Ritesh", 2000);
        siddhartha.createAccount("Ritesh",5000);
    }
}
