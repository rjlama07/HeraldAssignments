import java.util.LinkedList;
import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        LinkedList<String> Linklist = new LinkedList<>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name");
        String first_name = sc.nextLine();
        Linklist.addFirst(first_name);
        System.out.println("Enter your last name");
        String last_name = sc.nextLine();
        Linklist.addLast(last_name);
        sc.close();
        System.out.println("Fullname:" + Linklist.getFirst() + " " + Linklist.getLast());
    }
}