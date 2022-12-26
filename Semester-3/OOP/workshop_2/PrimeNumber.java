import java.util.Scanner;

class PrimeNumber{

    static void checkPrime(int a){
        boolean isPrime=true;
        for (int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                isPrime=false;
            }
        }
        if(isPrime)
        {
            System.out.println(String.valueOf(a)+" is Prime number");
        }
        else
        System.out.println(String.valueOf(a)+" is not Prime number");
    }
    public static void main(String[] args) {
        System.out.println("Enter a number");
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        sc.close();
        checkPrime(a);
    }
}