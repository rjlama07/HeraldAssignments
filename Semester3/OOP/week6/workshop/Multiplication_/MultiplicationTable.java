package workshop.Multiplication_;

public class MultiplicationTable {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Multiplication table of " + i);
            for (int j = 1; j <= 10; j++) {

                int mul = i * j;
                System.out.println(i + "x" + j + "=" + mul);
            }
            System.out.println("********************************");
        }
    }

}
