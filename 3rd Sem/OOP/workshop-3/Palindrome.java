import java.util.Scanner;

public class Palindrome{

    static void checkPalindrome(String input){
        String reverse="";
        for(int i=input.length()-1;i>=0;i--)
        { 
          reverse+=input.charAt(i) ;
        }
        if(input.equalsIgnoreCase(reverse))
        {
            System.out.println("Palindrome");
        }
        else
        {
            System.out.println("Not palindrome");
        }
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the input");
        String a=sc.next();
        sc.close();
        checkPalindrome(a);
        
    }

}