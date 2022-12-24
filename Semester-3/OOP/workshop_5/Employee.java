import java.util.Scanner;

abstract class Employee {
    void incrementSalary(int y){};

    abstract void salary(float a);

}

class Experience extends Employee {

    void salary(float a) {
        if (a >= 3) {
            System.out.println("60000");
        } else if (a >= 2) {
            System.out.println("50000");
        } else if (a >= 1) {
            System.out.println("45000");
        } else {
            System.out.println("28000");
        }
    }

    public static void main(String[] args) {
        System.out.println("Enter your Years of experience");
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat();
        sc.close();
        Experience experience = new Experience();
        experience.salary(a);

    }

}


