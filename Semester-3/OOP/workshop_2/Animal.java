public class Animal {
    String op="class";
    protected  String name="tommy";
    private String type;
    private int age;
    private String color;
    private String gender;
    private String breed;
    public void setBreed(String breed) {
        this.breed = breed;
    }
    public void setAge(int age) {
        this.age = age;
    }

    public void setType(String type) {
        this.type = type;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getType() {
        return type;
    }
    public int getAge() {
        return age;
    }

    public String getColor() {
        return color;
    }

    public String getGender() {
        return gender;
    }

    public String getBreed() {
        if (breed==null)
        {
            return ("not set");
        }
        else {
            return breed;
        }
    }
}

class Dog extends Animal{
    public static void main(String[] args) {
        Animal tommy=new Dog(); 
        tommy.setAge(7);
        tommy.setGender("Male");
        tommy.setColor("Brown");
        tommy.setType("Domestic");
        System.out.println("Age of tommy is "+tommy.getAge());
        System.out.println("Gender of tommy is "+tommy.getGender());
        System.out.println("Color of tommy is "+tommy.getColor());
        System.out.println("Breed of tommy is "+tommy.getBreed());
        System.out.println("Type of tommy is"+ tommy.getType());
    }
}

