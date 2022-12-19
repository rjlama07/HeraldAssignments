
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Signup {
    private String username;
    private String password;
    private String DOB;

    public String getUsername() {
        return username;
    }

    public void setUsername(String username) {
        this.username = username;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }

    public String getDOB() {
        return DOB;
    }

    public void setDOB(String dOB) {
        DOB = dOB;
    }

}

public class Resturant {
    public static boolean checkPassword(String p) {
        String regex = "^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(p);
        return matcher.matches();
    }

    public static void Signup(Scanner sc) {
        String username, password, c_password;
        System.out.println("Enter username");
        username = sc.next();

        while (true) {
            sc.nextLine();
            System.out.println("Enter password");
            password = sc.next();
            if (checkPassword(password)) {
                break;
            } else {
                System.out.println("Your password must contain atleast uppercase,lowercase and a special character");
            }
        }
        System.out.println("Enter Confirm password");
        c_password = sc.next();

        if (password.equals(c_password)) {
            System.out.println("Password confirmed");
        } else {
            System.out.println("Password didnt match");
        }
        String dob;
        System.out.println("Enter your date of birth in Dd/Mm/YYYY");
        dob = sc.next();
        Signup signup = new Signup();
        signup.setUsername(username);
        signup.setPassword(password);
        signup.setDOB(dob);
        System.out.println("Signup sucessful");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {

            int a;
            System.out.println("Presss 1 for signin\nPress 2 to quit");
            a = scanner.nextInt();
            if (a == 1) {
                scanner.nextLine();
                Signup(scanner);
                continue;
            } else if (a == 2) {
                System.out.println("Thankyou for using our application");
                break;
            }
        }
        scanner.close();

    }

}
