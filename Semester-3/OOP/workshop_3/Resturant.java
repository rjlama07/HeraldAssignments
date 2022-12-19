
import java.time.LocalDate;
import java.util.InputMismatchException;
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
    public static boolean validateBirthDate(String p) {
        String regex = "^(0[1-9]|1[012])[/](0[1-9]|[12][0-9]|3[01])[/](19|20)\\d\\d$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(p);
        return matcher.matches();
    }

    public static boolean valdiatePhonenumber(String ph) {
        String regex = "^0\\d{9}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(ph);
        return matcher.matches();
    }

    public static boolean checkPassword(String p) {
        String regex = "^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{8,}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(p);
        return matcher.matches();
    }

    public static boolean verifyAge(int year) {
        LocalDate date = LocalDate.now();
        if (date.getYear() >= 21) {
            return true;
        } else {
            return false;
        }
    }

    public static void Signup(Scanner sc) {

        String username, password, c_password, dob, ph;
        System.out.println("Enter username");
        username = sc.next();

        while (true) {
            sc.nextLine();
            System.out.println("Enter password");
            password = sc.next();
            if (checkPassword(password)) {
                System.out.println("Enter Confirm password");
                c_password = sc.next();
                if (password.equals(c_password)) {
                    System.out.println("Password confirmed");
                } else {
                    System.out.println("Password didnt match");
                    continue;
                }
                break;
            } else {
                System.out.println("Your password must contain atleast uppercase,lowercase and a special character");
            }
        }

        while (true) {
            sc.nextLine();
            System.out.println("Enter your date of birth in Dd/Mm/YYYY");
            dob = sc.next();
            if (validateBirthDate(dob)) {
                break;
            } else {
                System.out.println("Invalid dob");
            }
        }
        while (true) {
            System.out.println("Enter phone number");
            ph = sc.next();
            if (valdiatePhonenumber(ph)) {
                break;
            } else {
                System.out.println("Invalid phone Number");
            }
        }
        int year = Integer.parseInt(dob.split("/")[2]);

        if (verifyAge(year)) {
            Signup signup = new Signup();
            signup.setUsername(username);
            signup.setPassword(password);
            signup.setDOB(dob);
            System.out.println("Signup sucessful");
        } else {
            System.out.println("Your age must be greater than 20 to signUp");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            while (true) {
                int a;
                System.out.println("Presss 1 for signin\nPress 2 to quit");
                a = scanner.nextInt();
                if (a == 1) {
                    scanner.nextLine();
                    Signup(scanner);
                    continue;
                } else {
                    System.out.println("Thankyou for using our application");
                    break;
                }
            }
        } catch (InputMismatchException e) {
            System.out.println(e.toString());
        }
        scanner.close();
    }

}
