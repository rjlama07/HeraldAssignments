import java.util.Scanner;

public class Addition{
   public static boolean division(float a,float b){
    try{
        float c=a/b;
        System.out.println(c);
        return true;
    }
    catch(ArithmeticException e)
    {
        return false;
    }
   }

    public static void main(String[] args) {
        float a,b;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1st number");
        a=sc.nextFloat();
        System.out.println("Enter 2nd number");
        b=sc.nextFloat();
        sc.close();
        System.out.println(division(a, b));
        if(division(a, b))
        {
            System.out.println("No Exception");
        }
        else
        {
            System.out.println("Exceptions");
        }

        
    }
}