import java.util.Scanner;

public class Except {
    public static void main(String[] args) {
        int a;
        int b;
        try{
            System.out.println("Enter a number:");
            Scanner sc=new Scanner(System.in);
            a=sc.nextInt();
            System.out.println("Enter 2nd number");
            b=sc.nextInt();
            float c=a/b;
            System.out.println(c);
            sc.close();   
        }
        catch(ArithmeticException e)
        {
            System.out.println(e.toString());
        }
        catch(NullPointerException e)
        {
            System.out.println(e.toString());
        }
        catch(ClassCastException e)
        {
            System.out.println(e.toString());
        }
    }
    
}
