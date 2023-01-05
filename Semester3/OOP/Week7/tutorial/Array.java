import java.util.ArrayList;
import java.util.Scanner;

class Array {
    public static void main(String[] args) {
        ArrayList<Integer> elements = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 10; i++) {
            System.out.println("Enter element");
            int e = sc.nextInt();
            elements.add(e);
        }
        sc.close();
        elements.clear();
        for (int i = 0; i < 10; i++) {
            elements.remove(i);
            System.out.println(elements.get(i));
        }

    }
}