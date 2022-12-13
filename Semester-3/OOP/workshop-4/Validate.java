import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Validate {

    static boolean checkEmail(String email)
    {
        String regex="^np+[0-9]+cs+[0-9]+s+[0-9]{6}+@heraldcollege\\.edu\\.np$";
        Pattern pattern=Pattern.compile(regex);
        Matcher matcher=pattern.matcher(email);
        return matcher.matches();
    }

    static boolean checkPassword(String p){
        String regex="^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$";
        Pattern pattern=Pattern.compile(regex);
        Matcher matcher=pattern.matcher(p);
        return matcher.matches();
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter email");
        String email=sc.next();
        System.out.println(checkEmail(email));
        System.out.println("Enter password");
        String password=sc.next();
        System.out.println(checkPassword(password));
        sc.close();

    }
    
}
