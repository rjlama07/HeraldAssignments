public class Animal{
    int id;
    String name;
    Animal(){
        System.out.println("This is default constructor");
    }

    Animal(int i,String n){
        System.out.println("2nd constructor called");
    }

    public static void main(String[] args) {
        Animal ani=new Animal();
    }

}